// Test.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "Test.h"
#include "afxdialogex.h"


// CTest �Ի���

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


// CTest ��Ϣ�������


void CTest::OnBnClickedButtonTest()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	printf("this is test dlag\n");
}
