// 2.4 네임스페이스

#include <iostream>
#include "chapter2_004_001, 002.h"
using namespace std;

// 2.4.1 네임스페이스 
namespace TEST
{
	int g_nData = 100;

	void TestFunc()
	{
		cout << "TEST::TestFunc()" << endl;

	}
}

void fourone()
{
	TEST::TestFunc();
	cout << TEST::g_nData << endl;
}

// 2.4.2 using 선언 

// std 네임스페이스를 using 예약어로 선언한다.
	using namespace std;
	
	// TEST 네임스페이스에 using 선언을 한다.
	using namespace TEST;

void fourtwo()
{
	// TESTFunc()나 g_nData에도 범위 지정을 할 필요가 없다. 
	TestFunc();
	cout << g_nData << endl;

}