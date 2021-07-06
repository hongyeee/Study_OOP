// 2.1 디폴트 매개변수

#include <iostream>
#include "chapter2_001.h"
using namespace std;

// nParam 매개변수의 디폴트 값은 10이다.
int TestFunc1(int nParam = 10)
{
	return nParam;
}

void one_one()
{
	// 호출자가 실인수를 기수하지 않았으므로 디폴트 값을 적용한다.
	cout << TestFunc1() << endl;

	//호출자가 실인수를 확정했으므로 디폴트 값을 무시한다.
	cout << TestFunc1(20) << endl;

}

int TestFunc2(int = 10);

int TestFunc2(int nParam)
{
	return nParam;
}

void one_two()
{
	cout << TestFunc2(20) << endl;

}

int TestFunc3(int nParam1, int nParam2 = 2)
{
	return nParam1 * nParam2;
}

void one_three()
{
	// nParam1 = 10
	cout << TestFunc3(10) << endl;

	// nParam1 = 10, nParam2 = 5
	cout << TestFunc3(10, 5) << endl;
}