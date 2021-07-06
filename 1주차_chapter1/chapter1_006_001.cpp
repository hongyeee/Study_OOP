// 1.6 참조자 형식

//1.6.1 참조형 변수 선언과 정의

#include <iostream>
#include "chapter1_006_001.h"
using namespace std;

void sixone_one()
{
	int nData = 10;

	// nData 변수에 대한 참조자 선언
	int& ref = nData;

	// 참조자의 값을 변경하면 원본도 변경된다!
	ref = 20;
	cout << nData << endl;

	// 포인터를 쓰는 것과 비슷하다
	int* pnData = &nData;
	*pnData = 30;
	cout << nData << endl;

}

//매개변수가 int에 대한 참조 형식이다.
void TestFunc(int& rParam)
{
	// 피호출자 함수에서 원본의 값을 변경했다.
	rParam = 100;

}

void sixone_two()
{
	int nData = 0;

	// 참조에 의한 인수 전달이다.
	TestFunc(nData);
	cout << nData << endl;

}

// 참조 전달이므로 호출자 변수의 값을 변경할 수 있다.
void Swap(int& a, int& b)
{
	int nTmp = a;
	a = b;
	b = nTmp;
}

void sixone_three()
{
	int x = 10, y = 20;

	// 참조 전달이며 두 변수의 값이 교환된다.
	Swap(x, y);

	//교환된 결과를 출력한다.
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;

}