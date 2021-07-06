#include <iostream>
#include "chapter2_001.h"
using namespace std;

// nParam 매개변수의 디폴트 값은 10이다.
int TestFunc(int nParam = 10)
{
	return nParam;
}

void one()
{
	// 호출자가 실인수를 기수하지 않았으므로 디폴트 값을 적용한다.
	cout << TestFunc() << endl;

	//호출자가 실인수를 확정했으므로 디폴트 값을 무시한다.
	cout << TestFunc(20) << endl;

}