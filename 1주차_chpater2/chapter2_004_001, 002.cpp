// 2.4 ���ӽ����̽�

#include <iostream>
#include "chapter2_004_001, 002.h"
using namespace std;

// 2.4.1 ���ӽ����̽� 
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

// 2.4.2 using ���� 

// std ���ӽ����̽��� using ������ �����Ѵ�.
	using namespace std;
	
	// TEST ���ӽ����̽��� using ������ �Ѵ�.
	using namespace TEST;

void fourtwo()
{
	// TESTFunc()�� g_nData���� ���� ������ �� �ʿ䰡 ����. 
	TestFunc();
	cout << g_nData << endl;

}