#include "six.h"
#include <iostream>
#include <string>
using namespace std;

void six()
{
	string key1, key2;
	cout << "�� ��ȣ�� �Է��ϼ��� >> " << endl;
	cin >> key1;
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ��� >> " << endl;
	cin >> key2;
	if (key1 == key2)
	{
		cout << "�����ϴ� " << endl;

	}
	else
		cout << "���� �ʽ��ϴ�" << endl;
}
