// Test.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "Test.h"
#include "afxdialogex.h"


// CTest 对话框

IMPLEMENT_DYNAMIC(CTest, CDialogEx)

CTest::CTest(CWnd* pParent /*=NULL*/)
	: CDialogEx(CTest::IDD, pParent)
{

}

CTest::~CTest()
{
}

void CTest::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CTest, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_TEST, &CTest::OnBnClickedButtonTest)
END_MESSAGE_MAP()


// CTest 消息处理程序


void CTest::OnBnClickedButtonTest()
{
	// TODO:  在此添加控件通知处理程序代码
	printf("this is test dlag\n");
}
