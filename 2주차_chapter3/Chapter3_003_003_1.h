#pragma once
class Chapter3_003_003_1
{
public:
	// 디폴트 생성자는 없다.
	// 매개변수가 int 하나인 생성자 함수 선언
	Chapter3_003_003_1(int Param);

	// 매개변수가 int 자료형 두 개인 생성자 함수 다중 정의
	Chapter3_003_003_1(int x, int y);

	int GetData();
private:
	int Data;

};
