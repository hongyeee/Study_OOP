#include "twelve.h"
#include <iostream>
#include <string>
using namespace std;

int twelve(int a, int b)
{
	int k = a, res = 0;
	for (k; k <= b; k++)
	{
		res += k;
	}
	return res;
}

void twelve_solution()
{
	int n;
	cout << "�� ���� �Է��ϼ��� >> " << endl;
	cin >> n;
	cout << "1���� " << n << "������ ���� " << twelve(1, n) << "�Դϴ�" << endl;
}