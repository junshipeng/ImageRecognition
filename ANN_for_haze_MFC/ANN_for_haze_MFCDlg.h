// ANN_for_haze_MFCDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>

// Namespace for using cout.
using namespace std;

// Namespace for using Mat
using namespace cv;

// CANN_for_haze_MFCDlg �Ի���
class CANN_for_haze_MFCDlg : public CDialog
{
// ����
public:
	CANN_for_haze_MFCDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_ANN_FOR_HAZE_MFC_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
private:
	double m_Edit_times;
	double m_Edit_number;
	float m_Edit_original_AQI;
	float m_Edit_original_class;
	float m_Edit_predict_AQI;
	CString m_Edit_predict_class;
	CString m_Edit_original_class2;
	float m_Edit_error_AQI;
public:
	void DrawImage1(IplImage* Image);
	LPBITMAPINFO CtreateMapInfo(IplImage* workImg , int flag);
	void train_step();
	void test_step();
	void test_step2();
	
	afx_msg void OnBnClickedButtontrain();
	CStatic m_Edit_picture;
	afx_msg void OnBnClickedButton3inputnumber();
	afx_msg void OnBnClickedButtontest();
private:
	double m_Edit_error_train;
};
