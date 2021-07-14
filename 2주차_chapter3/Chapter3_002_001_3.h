#pragma once
class Chapter3_002_001_3
{
public:
	// 클래스의 생성자 함수 선언
	Chapter3_002_001_3();

	// 멤버 데이터 선언
	int Data1;
	int Data2;
	/*
	* 
	1) 생성자 초기화 목록을 이용해 변수 초기화
	Chapter3_002_001_3::Chapter3_002_001_3()
	: Data1(10), Data2(20) {}
	
	2) 선언과 동시에 멤버 변수를 초기화
	int Data1 = 10;
	int Data2 = 20;

	*/

	// 멤버 함수 선언
	void PrintData();
};

