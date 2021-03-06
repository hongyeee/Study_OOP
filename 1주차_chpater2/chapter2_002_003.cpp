// 2.2 함수 다중 정의

// 2.2.3 함수 템플릿

#include <iostream>
#include "chapter2_002_003.h"
using namespace std;

template <typename T>
T TestFunc(T a)
{
	cout << "매개변수 a: " << a << endl;
	
	return a;
}

void twothree_one()
{
	cout << "int\t" << TestFunc(3) << endl;
	cout << "double\t" << TestFunc(3.3) << endl;
	cout << "char\t" << TestFunc('A') << endl;
	cout << "char*\t" << TestFunc("TestString") << endl;

}

template <typename T>
T Add(T a, T b)
{
	return a + b;
}

void twothree_two()
{
	cout << Add(3,4) << endl;
	cout << Add(3.3, 4.4) << endl;
}