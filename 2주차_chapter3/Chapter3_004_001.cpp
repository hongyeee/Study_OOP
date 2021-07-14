// 3.4.1 this 포인터

#include "Chapter3_004_001.h"
#include <iostream>
using namespace std;

Chapter3_004_001::Chapter3_004_001(int Param) : Data(Param) {};

void Chapter3_004_001::PrintData()
{
	// Data의 값을 출력한다.
	cout << Data << endl;

	// Chapter3_004_001 클래스 멤버인 Data의 값을 출력한다.
	cout << Chapter3_004_001::Data << endl;

	// 메서드를 호출한 인스턴스의 Data의 값을 출력한다.
	cout << this->Data << endl;

	// 메서드를 호출한 인스턴스의 Chapter3_004_001 클래스 멤버인 Data의 값을 출력한다.
	cout << this->Chapter3_004_001::Data << endl;
}