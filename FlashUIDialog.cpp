// FlashUIDialog.cpp : implementation file
//

#include "stdafx.h"

#include "FlashUIDialog.h"

#define IDC_FLASH_UI		0x870802


/////////////////////////////////////////////////////////////////////////////
// CFlashUIDialog dialog

CFlashUIDialog::CFlashUIDialog(LPCTSTR lpszSwfFile, LPCTSTR lpszFlashVars, UINT nIDTemplate, CWnd* pParentWnd) : CDialog(nIDTemplate, pParentWnd)
{
	m_strSwfFile = lpszSwfFile;
	m_strFlashVars = lpszFlashVars;

	m_IDD = nIDTemplate;

	m_pRKeyWnd = NULL;
}

CFlashUIDialog::~CFlashUIDialog()
{
}

void CFlashUIDialog::RegisterKey(CWnd* pWnd, const CArray<UINT>& Keys)
{
	m_pRKeyWnd = pWnd;
	m_aRKeys.Copy(Keys);
}

BOOL CFlashUIDialog::PreTranslateMessage(MSG* pMsg)
{
	return CDialog::PreTranslateMessage(pMsg);
}

BEGIN_MESSAGE_MAP(CFlashUIDialog, CDialog)
	ON_WM_CREATE()
	ON_WM_DESTROY()
	ON_WM_SIZE()
END_MESSAGE_MAP()

BEGIN_EVENTSINK_MAP(CFlashUIDialog, CDialog)
    //{{AFX_EVENTSINK_MAP(CDlgClass)
	ON_EVENT(CFlashUIDialog, IDC_FLASH_UI, 0xc5 /* FlashCall (from ActionScript) */, OnFlashCall, VTS_BSTR)
	//}}AFX_EVENTSINK_MAP
END_EVENTSINK_MAP()

INT CFlashUIDialog::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CDialog::OnCreate(lpCreateStruct) == -1)
		return -1;

	CRect rcClient(0, 0, 0, 0);
	m_FlashUI.Create(NULL, NULL, WS_CHILD | WS_VISIBLE, rcClient, this, IDC_FLASH_UI);

	return 0;
}

void CFlashUIDialog::OnDestroy()
{
	return CDialog::OnDestroy();
}

BOOL CFlashUIDialog::OnInitDialog()
{
	CDialog::OnInitDialog();

	TCHAR exeFullPath[MAX_PATH];
	::GetModuleFileName(NULL,exeFullPath,MAX_PATH);
	::PathRemoveFileSpec(exeFullPath);
	
	TCHAR uiFullPath[MAX_PATH];
	::PathCombine(uiFullPath, exeFullPath, m_strSwfFile);

	m_bUICreated = FALSE;

	m_FlashUI.LoadMovie(0, uiFullPath);
	m_FlashUI.put_FlashVars(m_strFlashVars);

	return TRUE;
}

void CFlashUIDialog::OnSize(UINT nType, int cx, int cy)
{
	CRect rcClient;
	GetClientRect(rcClient);

	m_FlashUI.MoveWindow(rcClient);
}

void CFlashUIDialog::OnTimer(UINT nIDEvent)
{
}

void CFlashUIDialog::OnFlashCall(LPCTSTR request)
{
	CString funcName;
	ArgumentList args;

	if(CShockwaveFlash::deserializeInvocation(request, funcName, args))
	{
		if(funcName == _T("UICreated"))
		{
			if(m_bUICreated == FALSE)
				OnUICreated();

			m_bUICreated = TRUE;
		}
		else
		{
			OnUICall(funcName, args);
		}
	}
}

void CFlashUIDialog::OnUICreated()
{
}

void CFlashUIDialog::OnUICall(const CString& funcName, const ArgumentList& args)
{
}

BOOL CFlashUIDialog::CallUIFunction(const CString& funcname, const ArgumentList& args)
{
	CString request, result;
	CShockwaveFlash::serializeInvocation(funcname, args, request);

	HRESULT hr = m_FlashUI.CallFunction(request, result);

	return SUCCEEDED(hr) ? TRUE : FALSE;
}

BOOL CFlashUIDialog::CallUIFunction(const CString& funcname, const ArgumentList& args, CString& result)
{
	CString request;
	CShockwaveFlash::serializeInvocation(funcname, args, request);

	HRESULT hr = m_FlashUI.CallFunction(request, result);

	return SUCCEEDED(hr) ? TRUE : FALSE;
}

void CFlashUIDialog::CreateWnd(CWnd* pParent, CWnd* pNotify)
{	
	m_bModalless = TRUE;
	CDialog::Create(m_IDD, pParent);

	m_pNotifyWnd = pNotify;
}

void CFlashUIDialog::ShowDialog(BOOL bCenter)
{
	if(bCenter == TRUE)
		CenterWindow();

	ShowWindow(SW_SHOW);
	UpdateWindow();
}

void CFlashUIDialog::HideDialog()
{
	if(m_pNotifyWnd != NULL)
		m_pNotifyWnd->SetActiveWindow();

	ShowWindow(SW_HIDE);
}
