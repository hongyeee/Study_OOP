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

// r-value 참조 형식
void TestFunc(int&& Param)
{
	cout << "TestFunc(int &&)" << endl;
}

/*

r-value 참조 형식과 호출자 코드가 같다.

void TestFunc(int Param)
{
	cout << "TestFunc(int &&)" << endl;
}
*/

void chapter4_003_002_example2()
{
	// 3 + 4 연산 결과는 r-value이다. 절대로 l-value가 될 수 없다.

	TestFunc(3 + 4); // 3 + 4는 int형과 int&&형 모두 가능하다
}