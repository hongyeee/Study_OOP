#include "thirteen.h"
#include <iostream>
#include <string>
using namespace std;


void thirteen()
{
	int num, people;
	cout << "***** �¸��忡 ���� ���� ȯ���մϴ� *****" << endl;
	while (true)
	{
		cout << "«�� : 1, ¥�� : 2, ������ : 3, ���� : 4 >> " << endl;
		cin >> num;
		if (num > 4)
		{
			cout << "�ٽ� �ֹ��ϼ���" << endl;
			continue;
		}
		else if (num == 1)
		{
			cout << " ���κ� ? " << endl;
			cin >> people;
			cout << "«�� " << people << "�κ� ���Խ��ϴ�" << endl;
			continue;
		}

		else if (num == 2)
		{
			cout << " ���κ� ? " << endl;
			cin >> people;
			cout << "¥�� " << people << "�κ� ���Խ��ϴ�" << endl;
			continue;
		}

		else if (num == 3)
		{
			cout << " ���κ� ? " << endl;
			cin >> people;
			cout << "������ " << people << "�κ� ���Խ��ϴ�" << endl;
			continue;
		}
		else
			break;
			
	}
}