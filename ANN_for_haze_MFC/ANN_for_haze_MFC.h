// ANN_for_haze_MFC.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CANN_for_haze_MFCApp:
// �йش����ʵ�֣������ ANN_for_haze_MFC.cpp
//

class CANN_for_haze_MFCApp : public CWinApp
{
public:
	CANN_for_haze_MFCApp();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CANN_for_haze_MFCApp theApp;