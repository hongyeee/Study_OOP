// 3.5 ���� ���

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

// ���� ������ �ݵ�� ����� ���Ǹ� �и�
int Chapter3_005::Count = 0;