#ifndef	__FLASHUIDIALOG_H_INCLUDE__
#define __FLASHUIDIALOG_H_INCLUDE__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "ShockwaveFlash.h"

/////////////////////////////////////////////////////////////////////////////
// CFlashUIDialog

class CFlashUIDialog : public CDialog
{
public:
	CFlashUIDialog(LPCTSTR lpszSwfFile, LPCTSTR lpszFlashVars, UINT nIDTemplate, CWnd* pParentWnd = NULL);   // standard constructor
	virtual ~CFlashUIDialog();

	void CreateWnd(CWnd* pParent, CWnd* pNotify = NULL);

	virtual void ShowDialog(BOOL bCenter = TRUE);
	virtual void HideDialog();

	void RegisterKey(CWnd* pWnd, const CArray<UINT>& Keys);

protected:
	virtual BOOL PreTranslateMessage(MSG* pMsg);

	CREATE_SHOCKWAVEFLASH_SITE()

	virtual BOOL OnInitDialog();

	afx_msg INT OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnDestroy();

	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnTimer(UINT nIDEvent);

	DECLARE_MESSAGE_MAP()

	afx_msg void OnFlashCall(LPCTSTR request);

	DECLARE_EVENTSINK_MAP()

	virtual void OnUICreated();
	virtual void OnUICall(const CString& funcName, const ArgumentList& args);

	BOOL CallUIFunction(const CString& funcname, const ArgumentList& args);
	BOOL CallUIFunction(const CString& funcname, const ArgumentList& args, CString& result);

protected:
	UINT	m_IDD;

	BOOL	m_bModalless;
	CWnd*	m_pNotifyWnd;

	CString	m_strSwfFile;
	CString m_strFlashVars;

	CShockwaveFlash	m_FlashUI;	
	BOOL	m_bUICreated;

	CWnd*			m_pRKeyWnd;
	CArray<UINT>	m_aRKeys;
};

#endif // __FLASHUIDIALOG_H_INCLUDE__