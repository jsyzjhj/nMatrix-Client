//=================================================================================================
//
//  Copyright (C) 2012-2016, DigiStar Studio
//
//  This file is part of nMatrix client app (http://feather1231.myweb.hinet.net/)
//
//  All rights reserved.
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation; either version 2 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//
//
//  Above are some template claims copied from somewhere on the Internet that don't matter.
//  The code is written by c++ language and I know you have no fear of it. :D
//  Hope that you use the code to do good things like google's slogan, don't be evil.
//  Any feedback is welcomed.
//
//  Author: Pointer Huang <digistarstudio@google.com>
//
//
//=================================================================================================


#pragma once


// CnMatrixClientDlg dialog
class CnMatrixClientDlg : public CDialogEx
{
// Construction
public:
	CnMatrixClientDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_NMATRIXCLIENT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
