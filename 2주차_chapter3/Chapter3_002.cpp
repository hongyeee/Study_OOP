// 클래스를 이용해 객체지향 프로그램으로 변경

#include "Chapter3_002.h"
#include <iostream>
using namespace std;

// 멤버 함수 정의
void Chapter3_002::Print()
{
	// nAage와 szName은 Print() 함수의 지역 변수가 아니다!
	cout << Age <<", " << Name << endl;
}