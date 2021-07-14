// 3.2.1 멤버 선어 및 정의
// 생성자 함수의 역할

#include "Chapter3_002_001_2.h"
#include <iostream>
using namespace std;

// 클래스의 생성자 함수 정의
Chapter3_002_001_2::Chapter3_002_001_2()
{
	// 인스턴스가 생성되면 멤버 데이터를 자동으로 초기화 한다.
	cout << "Chapter3_002_001_2() : 생성자 함수" << endl;
	Data = 10;
}

// 멤버 함수 정의
void Chapter3_002_001_2::PrintData()
{
	cout << Data << endl;
}
