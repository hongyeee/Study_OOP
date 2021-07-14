// 3.2.2 접근 제어 지시자
// 객체 내부 멤버 변수의 임의 접근 차단

#include "Chapter3_002_002.h"

int Chapter3_002_002::GetData()
{
	return Data;
}

void Chapter3_002_002::SetData(int param)
{
	Data = param;
}