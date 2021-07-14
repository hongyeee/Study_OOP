// 2.2 함수 다중 정의

// 2.2.1 다중 정의 일반

#include <iostream>
#include "chapter2_002_001.h"
using namespace std;

int Add(int a, int b, int c)
{
	cout << "Add(int, int, int): ";

	return a + b + c;
}

int Add(int a, int b)
{
	cout << "Add(int, int): ";

	return a + b;
}

double Add(double a, double b)
{
	cout << "Add(double, double): ";

	return a + b;
}

void twoone()
{
	cout << Add(3, 4) << endl;
	cout << Add(3, 4, 5) << endl;
	cout << Add(3.3, 4.4) << endl;
}