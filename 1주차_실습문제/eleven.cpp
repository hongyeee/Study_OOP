#include "eleven.h"
#include <iostream>
#include <string>
using namespace std;

void eleven()
{
	int n;
	int sum = 0;
	cout << "�� ���� �Է��ϼ��� >> " << endl;
	cin >> n;
	for (int k = 1; k <= n; k++)
	{
		sum += k;
	}
	cout << "1���� " << n << "������ ���� " << sum << "�Դϴ�" << endl;
}