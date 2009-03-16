// dotNetInstallerDlg.h : file di intestazione
//

#pragma once

#include "installerTypes.h"
#include "afxwin.h"
#include "HyperlinkStatic.h"
#include "InstallerSetting.h"
#include "ComponentsList.h"

// finestra di dialogo CdotNetInstallerDlg
class CdotNetInstallerDlg : public CDialog
{
// Costruzione
public:
	CdotNetInstallerDlg(CWnd* pParent = NULL);	// costruttore standard

// Dati della finestra di dialogo
	enum { IDD = IDD_DOTNETINSTALLER_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// supporto DDX/DDV


// Implementazione
protected:
	HICON m_hIcon;

	// Funzioni generate per la mappa dei messaggi
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
private:
	bool m_additional_config;
	InstallerSetting m_Settings;
    void ExtractCab();
    void SelectComponents();
    // move a window to the coordinates defined by a rectangle with defaults
    static bool MoveWindow(CWnd& dlg, const WidgetPosition& pos);
public:
	CButton m_btnSkip;
	CButton m_btnInstall;
	CButton m_btnCancel;
	CStatic m_lblMessage;
	CComponentsList m_ListBoxComponents;
	CStatic m_PictureBox;
	CStatic m_lblOperatingSystem;
	INT_PTR RunDni(InstallerSetting & p_Setting, bool p_additional_config);
	afx_msg void OnBnClickedInstall();
	bool LoadComponentsList(void);
	CHyperlinkStatic m_InfoLink;
	afx_msg void OnDestroy();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedSkip();
};

