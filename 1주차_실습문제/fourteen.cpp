#include "fourteen.h"
#include <iostream>
#include <string>
using namespace std;

void fourteen()
{
	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500�� �Դϴ�." << endl;
	int num, total = 0;
	string coffee;

	while (true)
	{
		cout << "�ֹ� >> " << endl;
		cin >> coffee >> num;
		if (coffee == "����������")
		{
			total += 2000 * num;
			cout << 2000 * num << "�� �Դϴ�. ���ְ� �弼��" << endl;
			if (20000 <= total)
			{
				cout << "���� " << total << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~" << endl;
				break;
			}
				

		}
		else if (coffee == "�Ƹ޸�ī��")
		{
			total += 2300 * num;
			cout << 2300 * num << "�� �Դϴ�. ���ְ� �弼��" << endl;
			if (20000 <= total)
			{
				cout << "���� " << total << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~" << endl;
				break;
			}

		}
		else
		{
			total += 2500 * num;
			cout << 2500 * num << "�� �Դϴ�. ���ְ� �弼��" << endl;
			if (20000 <= total)
			{
				cout << "���� " << total << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~" << endl;
				break;
			}

		}
	}


}