// 3.2.1 멤버 선어 및 정의
// 멤버 변수 초기화를 위한 생성자 함수 사용

#include "Chapter3_002_001_1.h"
#include <iostream>
using namespace std;

// 클래스의 생성자 함수 정의
Chapter3_002_001_1::Chapter3_002_001_1()
{
	// 인스턴스가 생성되면 멤버 데이터를 자동으로 초기화 한다.
	Data = 10;
}

// 멤버 함수 정의
void Chapter3_002_001_1::PrintData()
{
	cout << Data << endl;
}
