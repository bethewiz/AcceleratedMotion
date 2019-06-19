
// test20190618AcceleratedMotionDlg.h: 헤더 파일
//

#pragma once


// Ctest20190618AcceleratedMotionDlg 대화 상자
class Ctest20190618AcceleratedMotionDlg : public CDialogEx
{
// 생성입니다.
public:
	Ctest20190618AcceleratedMotionDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TEST20190618ACCELERATEDMOTION_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();

	double GetDistance(double fStartSpeed, double fAcceleration, double fUniformMotion, double fDeceleration, double fTime);
};
