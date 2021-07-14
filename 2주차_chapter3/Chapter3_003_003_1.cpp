// 3.3.3 생성자 다중 정의

#include "Chapter3_003_003_1.h"

Chapter3_003_003_1::Chapter3_003_003_1(int Param)
	: Data(Param) {};

Chapter3_003_003_1::Chapter3_003_003_1(int x, int y)
	: Data(x + y) {};

int Chapter3_003_003_1::GetData()
{
	return Data;
}