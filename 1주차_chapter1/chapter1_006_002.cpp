// 1.6 참조자 형식

//1.6.2 r-value 참조

#include <iostream>
#include "chapter1_006_002.h"
using namespace std;

int TestFunc(int nParam)
{
	int nRestult = nParam * 2;

	return nRestult;
}

void sixtwo()
{
	int nInput = 0;
	cout << "Input number: ";
	cin >> nInput;

	// 산술 연산으로 만들어진 임시 객체에 대한 r-value 참조
	int&& rdata = nInput + 5;
	cout << rdata << endl;

	// 함수 반환으로 만들어진 임시 객체에 대한 r-value 참조
	int&& result = TestFunc(10);

	// 값을 변경할 수 있다.
	result += 10;
	cout << result << endl;

}
