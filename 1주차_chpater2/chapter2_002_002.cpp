// 2.2 함수 다중 정의

// 2.2.2 다중 정의와 모호성

#include <iostream>
#include "chapter2_002_002.h"
using namespace std;

void TestFunc(int a)
{
	cout << "TestFunc(int)" << endl;
}

void TestFunc(int a, int b = 10)
{
	cout << "TestFunc(int, int)" << endl;
}

void twotwo()
{
	// int a = 5인 함수의 호출인지, int a = 5, int b = 10인 함수에 대한 호출인지 모호해서 컴파일 오류 발생 
	// TestFunc(5);

}