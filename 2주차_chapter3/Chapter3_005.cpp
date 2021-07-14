// 3.5 정적 멤버

#include "Chapter3_005.h"

Chapter3_005::Chapter3_005(int Param)
	:Data(Param)
{
	Count++;
}
int Chapter3_005::GetData()
{
	return Data;
}

void Chapter3_005::ResetCount()
{
	Count = 0;
}

int Chapter3_005::GetCount()
{
	return Count;
}

// 정적 변수는 반드시 선언과 정의를 분리
int Chapter3_005::Count = 0;