// 3.2.1 ��� ���� �� ����
// ������ �Լ��� ����

#include "Chapter3_002_001_2.h"
#include <iostream>
using namespace std;

// Ŭ������ ������ �Լ� ����
Chapter3_002_001_2::Chapter3_002_001_2()
{
	// �ν��Ͻ��� �����Ǹ� ��� �����͸� �ڵ����� �ʱ�ȭ �Ѵ�.
	cout << "Chapter3_002_001_2() : ������ �Լ�" << endl;
	Data = 10;
}

// ��� �Լ� ����
void Chapter3_002_001_2::PrintData()
{
	cout << Data << endl;
}
