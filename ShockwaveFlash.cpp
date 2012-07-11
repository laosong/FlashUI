#include "stdafx.h"

#include "ShockwaveFlash.h"

#define FLASH9OCX	_T("Flash9c.ocx")

CShockwaveFlashSite::CShockwaveFlashSite(COleControlContainer* pContainer) : COleControlSite(pContainer)
{
	m_FlashOcxHMODULE = NULL;
	m_bCreateFromOcx = FALSE;
}

CShockwaveFlashSite::~CShockwaveFlashSite()
{
	//if(m_FlashOcxHMODULE != NULL) ::FreeLibrary(m_FlashOcxHMODULE);
}

typedef HRESULT (WINAPI* PFNDllGetClassObject)(REFCLSID rclsid, REFIID riid, LPVOID* ppv);

HRESULT CShockwaveFlashSite::CoCreateFlashAxInstance(REFCLSID clsid, LPUNKNOWN pUnkOuter, DWORD dwClsCtx, REFIID iid, LPVOID* ppv)
{
	HRESULT hr = E_FAIL;

	TCHAR exeFullPath[MAX_PATH];
	::GetModuleFileName(NULL,exeFullPath,MAX_PATH);
	::PathRemoveFileSpec(exeFullPath);

	TCHAR ocxFullPath[MAX_PATH];
	::PathCombine(ocxFullPath, exeFullPath, FLASH9OCX);

	if(::PathFileExists(ocxFullPath))
	{
		m_FlashOcxHMODULE = ::LoadLibrary(ocxFullPath);
		if (m_FlashOcxHMODULE)
		{
			LPCLASSFACTORY pClassFactory = NULL;
			PFNDllGetClassObject pfnDllGetClassObject = (PFNDllGetClassObject)GetProcAddress(m_FlashOcxHMODULE, "DllGetClassObject");
			if (pfnDllGetClassObject)
			{
				hr = pfnDllGetClassObject(clsid, IID_IClassFactory, (LPVOID*)&pClassFactory);
				if (SUCCEEDED(hr))
				{
					hr = pClassFactory->CreateInstance(NULL, iid, ppv);
					pClassFactory->Release();
				}
			}
		}
	}

	if(SUCCEEDED(hr))
	{
		m_bCreateFromOcx = TRUE;
	}
	else
	{
		LPCLASSFACTORY pClassFactory = NULL;

		if (SUCCEEDED(hr = CoGetClassObject(clsid, dwClsCtx, NULL, IID_IClassFactory, (void**)&pClassFactory)))
		{
			ASSERT(pClassFactory != NULL);
			hr = pClassFactory->CreateInstance(pUnkOuter, iid, ppv);
			pClassFactory->Release();
		}
	}

	return hr;
}

HRESULT CShockwaveFlashSite::CreateOrLoad(REFCLSID clsid, CFile* pFile, BOOL bStorage, BSTR bstrLicKey)
{
#ifdef _DEBUG
	OLECHAR wszClsid[40];
	StringFromGUID2(clsid, wszClsid, 40);
#endif //_DEBUG

	HRESULT hr=S_OK;

	if (m_pObject == NULL)
	{
		if (FAILED(hr = CoCreateFlashAxInstance(clsid, NULL, CLSCTX_INPROC_SERVER | CLSCTX_INPROC_HANDLER, IID_IOleObject, (void**)&m_pObject)))
		{
#ifdef _DEBUG
			TRACE(traceOle, 0, "CoCreateInstance of OLE control %ls failed.\n", wszClsid);
			TRACE(traceOle, 0, ">>> Result code: 0x%08lx\n", hr);
			TRACE(traceOle, 0, ">>> Is the control is properly registered?\n");
#endif
			return hr;
		}
	}

	LPPERSISTSTREAMINIT pPersStm = NULL;
	LPPERSISTSTORAGE pPersStg = NULL;
	LPPERSISTMEMORY pPersMem = NULL;

	GetEventIID(&m_iidEvents);
	// Try to quick-activate first
	BOOL bQuickActivated = QuickActivate();

	if (!bQuickActivated)
	{
		m_pObject->GetMiscStatus(DVASPECT_CONTENT, &m_dwMiscStatus);
		m_dwMiscStatus = 131473;

		// set client site first, if appropriate
		if (m_dwMiscStatus & OLEMISC_SETCLIENTSITEFIRST)
		{
			if (FAILED(hr = m_pObject->SetClientSite(&m_xOleClientSite)))
			{
#ifdef _DEBUG
				TRACE(traceOle, 0, "SetClientSite on OLE control %ls failed.\n", wszClsid);
				TRACE(traceOle, 0, ">>> Result code: 0x%08lx\n", hr);
#endif
				goto CreateOrLoadFailed;
			}
		}
	}

	ASSERT(!bStorage || pFile != NULL);

	// initialize via IPersistMemory (direct buffering)
	if (pFile != NULL && !bStorage &&
		SUCCEEDED(m_pObject->QueryInterface(IID_IPersistMemory, (void**)&pPersMem)) &&
		pFile->GetBufferPtr(CFile::bufferCheck) != 0)
	{
		ASSERT(pPersMem != NULL);

		// file supports direct buffering, get its buffer pointer and size
		LPVOID pvBuffer = NULL;
		LPVOID pvEnd;
		ULONG cbBuffer = pFile->GetBufferPtr(CFile::bufferRead, (UINT)-1, &pvBuffer, &pvEnd);
		ASSERT(((LPBYTE)pvEnd - (LPBYTE)pvBuffer) == (int)cbBuffer);

		// and then load it directly
		hr = pPersMem->Load(pvBuffer, cbBuffer);
		pPersMem->Release();
		pPersMem = NULL;
		if (FAILED(hr))
			goto CreateOrLoadFailed;
	}
	// initialize via IPersistStreamInit
	else if (!bStorage && SUCCEEDED(m_pObject->QueryInterface(IID_IPersistStreamInit, (void**)&pPersStm)))
	{
		ASSERT(pPersStm != NULL);

		if (pFile == NULL)
		{
			// just call InitNew
			pPersStm->InitNew();
		}
		else
		{
			// TODO
		}
		pPersStm->Release();

		if (FAILED(hr))
		{
#ifdef _DEBUG
			TRACE(traceOle, 0, "InitNew or Load on OLE control %ls failed.\n", wszClsid);
			TRACE(traceOle, 0, ">>> Result code: 0x%08lx\n", hr);
#endif
			goto CreateOrLoadFailed;
		}
	}
	// initialize via IPersistStorage
	else if (SUCCEEDED(m_pObject->QueryInterface(IID_IPersistStorage, (void**)&pPersStg)))
	{
		ASSERT(pPersStg != NULL);

		if (pFile == NULL)
		{
			// create a scratch IStorage and pass it to InitNew
			LPLOCKBYTES pLockBytes = NULL;
			if (SUCCEEDED(hr = CreateILockBytesOnHGlobal(NULL, TRUE,&pLockBytes)))
			{
				ASSERT(pLockBytes != NULL);
				LPSTORAGE pStorage = NULL;
				if (SUCCEEDED(hr = StgCreateDocfileOnILockBytes(pLockBytes, STGM_CREATE | STGM_READWRITE | STGM_SHARE_EXCLUSIVE, 0, &pStorage)))
				{
					ASSERT(pStorage != NULL);
					hr = pPersStg->InitNew(pStorage);
					pStorage->Release();
				}
				pLockBytes->Release();
			}
		}
		else if (bStorage)
		{
			// copy data to an HGLOBAL, so we can build an IStorage on it
			ULONGLONG cb = pFile->GetLength();
			HGLOBAL hGlobal;
			BYTE* pbData;

			if ((cb < ULONG_MAX) &&
				((hGlobal = GlobalAlloc(GMEM_FIXED, ULONG(cb))) != NULL) &&
				((pbData = (BYTE*)GlobalLock(hGlobal)) != NULL))
			{
				pFile->Read(pbData, ULONG(cb));
				GlobalUnlock(hGlobal);
			}
			else
			{
				hr = E_OUTOFMEMORY;
				hGlobal = NULL;
			}

			// open an IStorage on the data and pass it to Load
			LPLOCKBYTES pLockBytes = NULL;
			if ((hGlobal != NULL) &&
				SUCCEEDED(hr = CreateILockBytesOnHGlobal(hGlobal, TRUE, &pLockBytes)))
			{
				ASSERT(pLockBytes != NULL);
				LPSTORAGE pStorage = NULL;
				if (SUCCEEDED(hr = StgOpenStorageOnILockBytes(pLockBytes, NULL, STGM_READWRITE | STGM_SHARE_EXCLUSIVE, NULL, 0, &pStorage)))
				{
					ASSERT(pStorage != NULL);
					hr = pPersStg->Load(pStorage);
					pStorage->Release();
				}
				pLockBytes->Release();
			}
		}
		else
		{
			hr = E_UNEXPECTED;
		}
		pPersStg->Release();

		if (FAILED(hr))
		{
#ifdef _DEBUG
			TRACE(traceOle, 0, "InitNew or Load on OLE control %ls failed.\n", wszClsid);
			TRACE(traceOle, 0, ">>> Result code: 0x%08lx\n", hr);
#endif
			goto CreateOrLoadFailed;
		}
	}
	else
	{
#ifdef _DEBUG
		TRACE(traceOle, 0, "Persistence not supported on OLE control %ls.\n", wszClsid);
		TRACE(traceOle, 0, ">>> Result code: 0x%08lx\n", hr);
#endif
		goto CreateOrLoadFailed;
	}

	if (!bQuickActivated)
	{
		// set client site last, if appropriate
		if (!(m_dwMiscStatus & OLEMISC_SETCLIENTSITEFIRST))
		{
			if (FAILED(hr = m_pObject->SetClientSite(&m_xOleClientSite)))
			{
#ifdef _DEBUG
				TRACE(traceOle, 0, "SetClientSite on OLE control %ls failed.\n", wszClsid);
				TRACE(traceOle, 0, ">>> Result code: 0x%08lx\n", hr);
#endif
				goto CreateOrLoadFailed;
			}
		}
	}

CreateOrLoadFailed:
	if (FAILED(hr) && (m_pObject != NULL))
	{
		m_pObject->Close(OLECLOSE_NOSAVE);
		m_pObject->Release();
		m_pObject = NULL;
	}

	if (pPersMem != NULL)
		pPersMem->Release();

	if (bQuickActivated && SUCCEEDED(hr))
		hr = S_QUICKACTIVATED;

	return hr;
}

Argument Argument::Null;

/////////////////////////////////////////////////////////////////////////////
// CShockwaveFlash

IMPLEMENT_DYNCREATE(CShockwaveFlash, CWnd)

BEGIN_MESSAGE_MAP(CShockwaveFlash, CWnd)
	//{{AFX_MSG_MAP(CShockwaveFlash)
	//ON_WM_NCHITTEST()
	//ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CShockwaveFlash message process
BOOL CShockwaveFlash::PreTranslateMessage(MSG* pMsg) 
{
	// TODO: Add your specialized code here and/or call the base class
	if (pMsg->message == WM_RBUTTONDOWN)
		return TRUE;

	if (pMsg->message == WM_LBUTTONDOWN && m_bEasyMove == TRUE)
	{
		CWnd* pParent = GetParent();
		if(pParent != NULL)
		{
			pParent->SendMessage(WM_NCLBUTTONDOWN, HTCAPTION, 0);
		}
	}
	
	return CWnd::PreTranslateMessage(pMsg);
}

LRESULT CShockwaveFlash::OnNcHitTest(CPoint point)
{
    UINT nHitTest = CWnd::OnNcHitTest(point);
    return (nHitTest == HTCLIENT) ? HTCAPTION : nHitTest;
}

void CShockwaveFlash::OnLButtonDown(UINT nFlags, CPoint point)
{
	return CWnd::OnLButtonDown(nFlags, point);
}

/////////////////////////////////////////////////////////////////////////////
// CShockwaveFlash properties

/////////////////////////////////////////////////////////////////////////////
// CShockwaveFlash operations
