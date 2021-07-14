#pragma once
class Chapter3_005
{
public:
	Chapter3_005(int Param);
	int GetData();
	void ResetCount();
	
	// 정적 메서드 선언
	static int GetCount();

private:
	int Data;

	//정적 멤버 변수 선언(정의는 아니다!)
	static int Count;

};

