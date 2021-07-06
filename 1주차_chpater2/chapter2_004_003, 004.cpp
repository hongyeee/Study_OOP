#include <iostream>
#include "chapter2_004_003, 004.h"
using namespace std;

// 2.4.3 ���ӽ����̽��� ��ø
namespace TEST1
{
	int g_nData = 100;
	namespace DEV
	{
		int g_nData = 200;
		namespace WIN
		{
			int g_nData = 300;
		}
	}
}

void fourthree()
{
	cout << TEST1::g_nData << endl;
	cout << TEST1::DEV::g_nData << endl;
	cout << TEST1::DEV::WIN::g_nData << endl;
}

// 2.4.4 ���ӽ����̽��� ���� ����

// ����(����� ���Ҽ�)
void TestFunc(void) { cout << "::TestFunc()" << endl; }

namespace TEST2
{
	//TEST ���ӽ����̽� �Ҽ�
	void TestFunc(void) {
		cout << "TEST::TestFunc()" << endl;
	}
}

namespace MYDATA
{
	// MYDATA ���ӽ����̽� �Ҽ�
	void TestFunc(void) {
		cout << "DATA::TestFunc()" << endl;

	}
}

void fourfour()
{
	TestFunc();			// ������ ����
	::TestFunc();		// ����� ����
	TEST2::TestFunc();
	MYDATA::TestFunc();

}