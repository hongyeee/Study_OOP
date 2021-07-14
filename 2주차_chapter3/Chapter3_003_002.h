#pragma once
class Chapter3_003_002
{
public:
	Chapter3_003_002(int& Param);
	int GetData();

private:
	// 참조형 멤버는 객체가 생성될 때 반드시 초기화해야 한다.
	int& Data;
};

