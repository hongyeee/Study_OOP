// 3.4.6 ��� �Լ� ���� ����

#include "Chapter3_004_006.h"

Chapter3_004_006::Chapter3_004_006()
	: Data(0) {}
int Chapter3_004_006::GetData()
{
	return Data;
}

void Chapter3_004_006::SetData(int nParam)
{
	Data = nParam;
}

void Chapter3_004_006::SetData(double dParam)
{
	Data = 0;
}
