// 3.4.3 ����� �޼���

#include "Chapter3_004_003.h"

Chapter3_004_003::Chapter3_004_003(int Param)
	: Data(Param) {}

Chapter3_004_003::~Chapter3_004_003() {}

int Chapter3_004_003::GetData() const
{
	// ��� ������ ���� ���� ���� ������ �� ���� ����.
	return Data;	
}


/*
int Chapter3_004_003::GetData() const
{
	SetData(20);

	return Data;
} -> �Ұ���!!!
-> ���� �޽���: this�����͸� const Chapter3_004_003���� Chapter3_004_003&�� ��ȯ�� �� �����ϴ�.

int Chapter3_004_003::GetData() const
{
	Data = 20;

	return Data;
} -> �Ұ���!!!
-> ���� �޽���: Data�� const ��ü�� ���� �׼����ǰ� �����Ƿ� ������ �� �����ϴ�.

*/


void Chapter3_004_003::SetData(int Param)
{
	Data = Param;
}

// ����� �޼���� �����(Ȥ�� ����������) ��� ������ ���� �� �� ����, ����� �޼��尡 �ƴ� ����� ȣ���� �� ����.