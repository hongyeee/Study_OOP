#include "chapter4_003_002.h"
#include <iostream>
using namespace std;

void chapter4_003_002_example1()
{
	int&& data = 3 + 4;
	cout << data << endl;
	data++;
	cout << data << endl;
}

void TestFunc(int& Param)
{
	cout << "TestFunc(int &)" << endl;
}

// r-value ���� ����
void TestFunc(int&& Param)
{
	cout << "TestFunc(int &&)" << endl;
}

/*

r-value ���� ���İ� ȣ���� �ڵ尡 ����.

void TestFunc(int Param)
{
	cout << "TestFunc(int &&)" << endl;
}
*/

void chapter4_003_002_example2()
{
	// 3 + 4 ���� ����� r-value�̴�. ����� l-value�� �� �� ����.

	TestFunc(3 + 4); // 3 + 4�� int���� int&&�� ��� �����ϴ�
}