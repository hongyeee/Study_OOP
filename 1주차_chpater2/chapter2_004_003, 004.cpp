#include <iostream>
#include "chapter2_004_003, 004.h"
using namespace std;

// 2.4.3 네임스페이스의 중첩
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

// 2.4.4 네임스페이스와 다중 정의

// 전역(개념상 무소속)
void TestFunc(void) { cout << "::TestFunc()" << endl; }

namespace TEST2
{
	//TEST 네임스페이스 소속
	void TestFunc(void) {
		cout << "TEST::TestFunc()" << endl;
	}
}

namespace MYDATA
{
	// MYDATA 네임스페이스 소속
	void TestFunc(void) {
		cout << "DATA::TestFunc()" << endl;

	}
}

void fourfour()
{
	TestFunc();			// 묵시적 전역
	::TestFunc();		// 명시적 전역
	TEST2::TestFunc();
	MYDATA::TestFunc();

}