// 3.3 �����ڿ� �Ҹ���

#include "Chapter3_003_2.h"
#include <iostream>
using namespace std;

// �������� �Ű������� ���޵� ������ ��� ������ �ʱ�ȭ �Ѵ�.
Chapter3_003_2::Chapter3_003_2(int Param) 
	: Data(Param)
{
	cout << "Chapter3_003_2::Chapter3_003_2" << endl;
}

Chapter3_003_2::~Chapter3_003_2()
{
	// ������ �� �Ű������� ���� ���� ����Ѵ�.
	cout << "Chapter3_003_2::~Chapter3_003_2 "<< Data << endl;
}