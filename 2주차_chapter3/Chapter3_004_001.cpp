// 3.4.1 this ������

#include "Chapter3_004_001.h"
#include <iostream>
using namespace std;

Chapter3_004_001::Chapter3_004_001(int Param) : Data(Param) {};

void Chapter3_004_001::PrintData()
{
	// Data�� ���� ����Ѵ�.
	cout << Data << endl;

	// Chapter3_004_001 Ŭ���� ����� Data�� ���� ����Ѵ�.
	cout << Chapter3_004_001::Data << endl;

	// �޼��带 ȣ���� �ν��Ͻ��� Data�� ���� ����Ѵ�.
	cout << this->Data << endl;

	// �޼��带 ȣ���� �ν��Ͻ��� Chapter3_004_001 Ŭ���� ����� Data�� ���� ����Ѵ�.
	cout << this->Chapter3_004_001::Data << endl;
}