// 1.6 ������ ����

//1.6.1 ������ ���� ����� ����

#include <iostream>
#include "chapter1_006_001.h"
using namespace std;

void sixone_one()
{
	int nData = 10;

	// nData ������ ���� ������ ����
	int& ref = nData;

	// �������� ���� �����ϸ� ������ ����ȴ�!
	ref = 20;
	cout << nData << endl;

	// �����͸� ���� �Ͱ� ����ϴ�
	int* pnData = &nData;
	*pnData = 30;
	cout << nData << endl;

}

//�Ű������� int�� ���� ���� �����̴�.
void TestFunc(int& rParam)
{
	// ��ȣ���� �Լ����� ������ ���� �����ߴ�.
	rParam = 100;

}

void sixone_two()
{
	int nData = 0;

	// ������ ���� �μ� �����̴�.
	TestFunc(nData);
	cout << nData << endl;

}

// ���� �����̹Ƿ� ȣ���� ������ ���� ������ �� �ִ�.
void Swap(int& a, int& b)
{
	int nTmp = a;
	a = b;
	b = nTmp;
}

void sixone_three()
{
	int x = 10, y = 20;

	// ���� �����̸� �� ������ ���� ��ȯ�ȴ�.
	Swap(x, y);

	//��ȯ�� ����� ����Ѵ�.
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;

}