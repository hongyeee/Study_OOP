#include "eight.h"
#include <iostream>
using namespace std;

void eigth_sol()
{
	string answer = "y";
	InkJetPrinter ink("Officeje V40", "HP", 0, 5, 10 );
	LaserPrinter laser("SCX-6x45", "�Ｚ����", 0, 3, 20);
	cout << "���� �۵����� 2���� �����ʹ� �Ʒ��� ����" << endl;
	cout << "��ũ�� : " << ink.getmodel() << ", " << ink.getmanufacturer() << ", ���� ���� : " << ink.getavailableCount() << ", ���� ��ũ : " << ink.getInk() << endl;
	cout << "������ : " << laser.getmodel() << ", " << laser.getmanufacturer() << ", ���� ���� : " << laser.getavailableCount() << ", ���� ��ũ : " << laser.getToner() << endl;
	while (answer == "y")
	{
		int num, pages;
		cout << "������(1 : ��ũ��, 2 : ������)�� �ż� �Է� >> " << endl;
		cin >> num >> pages;
		if (num == 1)
		{
			if (pages <= ink.getavailableCount())
			{
				if (pages <= ink.getInk())
				{
					ink.printInkJet(pages);
					cout << "����Ʈ �Ͽ����ϴ�" << endl;
				}
				else
				{
					cout << "��ũ�� �����Ͽ� ����Ʈ �� �� �����ϴ�" << endl;
				}
				
			}
			else
			{
				cout << "������ �����Ͽ� ����Ʈ �� �� �����ϴ�" << endl;
			}
		}
		else
		{
			if (pages <= laser.getavailableCount())
			{
				if (pages <= laser.getToner())
				{
					laser.printLaser(pages);
					cout << "����Ʈ �Ͽ����ϴ�" << endl;
				}
				else
				{
					cout << "��ʰ� �����Ͽ� ����Ʈ �� �� �����ϴ�" << endl;
				}

			}
			else
			{
				cout << "������ �����Ͽ� ����Ʈ �� �� �����ϴ�" << endl;
			}

		}
		cout << ink.getmodel() << ", " << ink.getmanufacturer() << ", ���� ���� : " << ink.getavailableCount() << ", ���� ��ũ : " << ink.getInk() << endl;
		cout << laser.getmodel() << ", " << laser.getmanufacturer() << ", ���� ���� : " << laser.getavailableCount() << ", ���� ��ũ : " << laser.getToner() << endl;
		cout << "��� ����Ʈ �Ͻðڽ��ϱ� (y/n) >> " << endl;
		cin >> answer;



	}
}