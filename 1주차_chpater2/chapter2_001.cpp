// 2.1 ����Ʈ �Ű�����

#include <iostream>
#include "chapter2_001.h"
using namespace std;

// nParam �Ű������� ����Ʈ ���� 10�̴�.
int TestFunc1(int nParam = 10)
{
	return nParam;
}

void one_one()
{
	// ȣ���ڰ� ���μ��� ������� �ʾ����Ƿ� ����Ʈ ���� �����Ѵ�.
	cout << TestFunc1() << endl;

	//ȣ���ڰ� ���μ��� Ȯ�������Ƿ� ����Ʈ ���� �����Ѵ�.
	cout << TestFunc1(20) << endl;

}

int TestFunc2(int = 10);

int TestFunc2(int nParam)
{
	return nParam;
}

void one_two()
{
	cout << TestFunc2(20) << endl;

}

int TestFunc3(int nParam1, int nParam2 = 2)
{
	return nParam1 * nParam2;
}

void one_three()
{
	// nParam1 = 10
	cout << TestFunc3(10) << endl;

	// nParam1 = 10, nParam2 = 5
	cout << TestFunc3(10, 5) << endl;
}