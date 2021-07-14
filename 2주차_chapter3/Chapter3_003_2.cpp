// 3.3 생성자와 소멸자

#include "Chapter3_003_2.h"
#include <iostream>
using namespace std;

// 생성자의 매개변수로 전달된 값으로 멤버 변수를 초기화 한다.
Chapter3_003_2::Chapter3_003_2(int Param) 
	: Data(Param)
{
	cout << "Chapter3_003_2::Chapter3_003_2" << endl;
}

Chapter3_003_2::~Chapter3_003_2()
{
	// 생성할 때 매개변수로 받은 값을 출력한다.
	cout << "Chapter3_003_2::~Chapter3_003_2 "<< Data << endl;
}