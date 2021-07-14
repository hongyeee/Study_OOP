// 3.3.2 참조 형식 멤버 초기화

#include "Chapter3_003_002.h"

Chapter3_003_002::Chapter3_003_002(int& Param)
	: Data(Param) {};

int Chapter3_003_002::GetData()
{
	return Data;
}