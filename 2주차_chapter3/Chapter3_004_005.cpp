// 3.4.5 ����� �޼����� ���� ����

#include "Chapter3_004_005.h"


Chapter3_004_005::Chapter3_004_005(int Param)
	: Data(Param) {}


int Chapter3_004_005::GetData() const
{
	// ����� �޼���� mutable ��� �������� ���� �� �� �ִ�.
	Data = 20;
	return Data;
}

void Chapter3_004_005::SetData(int Param)
{
	Data = Param;
}
/*
void TestFunc(const int &nParam)
{
	// ����� ���������� �Ϲ� ������ ����ȯ �ߴ�.
	int %nNewParam = const_Cast<int&>(nParam);

	// ���� l-value�� �� �� �ִ�.
	nNewParam = 20;
}

int main()
{
	int Data = 10;

	//����� ������ ���������� ���� ����ȴ�.
	TestFunc(Data);

	// ����� ���� ����Ѵ�.
	cout << Data << endl;

	return 0;
}

-> 20

*/

// ����ȯ ������:  const_cast<������> (���)
