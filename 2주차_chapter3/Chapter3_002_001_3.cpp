// 3.2.1 ��� ���� �� ����
// ������ �ʱ�ȭ ����� �̿��� ��� ���� �ʱ�ȭ

#include "Chapter3_002_001_3.h"
#include <iostream>
using namespace std;

// ������ �ʱ�ȭ ����� �̿��� ��� �ʱ�ȭ
Chapter3_002_001_3::Chapter3_002_001_3()
	: Data1(10), Data2(20) {}

// ��� �Լ� ����
void Chapter3_002_001_3::PrintData()
{
	// �� ���� ��� �����Ϳ� �����ϰ� ���� ����Ѵ�.
	cout << Data1 << endl;
	cout << Data2 << endl;
}