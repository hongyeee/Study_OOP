#include <iostream>
#include "chapter1_007_001.h"
using namespace std;

void sevenone()
{
	int aList[5] = { 10, 20, 30, 40, 50 };

	// �������� C ��Ÿ�� �ݺ���
	for (int i = 0; i < 5; ++i)
		cout << aList[i] << ' ';

	cout << endl;

	// ���� ��� c++ ��Ÿ�� �ݺ���
	// �� ����� ���� n�� �����Ѵ�.
	for (auto n : aList)
		cout << n << ' ';

	cout << endl;

	// n�� �� ��ҿ� ���� ������.'
	for (auto& n : aList)
		cout << n << ' ';
	cout << endl;

}
