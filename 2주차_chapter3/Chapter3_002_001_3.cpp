// 3.2.1 멤버 선어 및 정의
// 생성자 초기화 목록을 이용한 멤버 변수 초기화

#include "Chapter3_002_001_3.h"
#include <iostream>
using namespace std;

// 생성자 초기화 목록을 이용한 멤버 초기화
Chapter3_002_001_3::Chapter3_002_001_3()
	: Data1(10), Data2(20) {}

// 멤버 함수 정의
void Chapter3_002_001_3::PrintData()
{
	// 두 개의 멤버 데이터에 접근하고 값을 출력한다.
	cout << Data1 << endl;
	cout << Data2 << endl;
}