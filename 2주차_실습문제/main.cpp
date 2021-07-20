#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
#include "One.h"
#include "Two.h"
#include "Three.h"
#include "Four.h"
#include "Five.h"
#include "Six.h"

int main()
{
	One myTower; // 1����
	One seoulTower(100); // 100����
	cout << "���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;


	Two birth(2014, 3, 20); // 2014�� 3�� 20��
	Two independenceDay("1945/8/13"); // 1945�� 8�� 15��
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;


	Three kitae("kitae", 1, 5000); // id 1��, �ܾ� 5000��, �̸��� kitae�� ���� ����
	kitae.deposit(50000); // 50000�� ����
	cout << kitae.getOwner() << "�� �ܾ��� " << kitae.inquiry() << endl;
	int money = kitae.withdraw(20000); // 20000�� ���
	cout << kitae.getOwner() << "�� �ܾ��� " << kitae.inquiry() << endl;


	Four coffeemachine(5, 10, 3); // Ŀ��: 5, ��: 10, ����: 6���� �ʱ�ȭ
	coffeemachine.drinkEspresso(); // Ŀ�� 1, �� 1 �Һ�
	coffeemachine.show();
	coffeemachine.drinkAmericano(); // Ŀ�� 1, �� 2 �Һ�
	coffeemachine.show();
	coffeemachine.drinkSugarCoffee(); // Ŀ�� 1, �� 2, ���� 1 �Һ�
	coffeemachine.show();
	coffeemachine.fill(); // Ŀ��: 10, ��: 10, ����: 10���� ä���
	coffeemachine.show();


	Five random;
	cout << "__ 0���� " << RAND_MAX << "������ ���� ���� 10�� __" << endl;
	for (int i = 0; i < 10; i++)
	{
		
		int n = random.next(); // 0���� RAND_MAX(32767) ������ ������ ����
		cout << n << ' ';
	}
	cout << endl << endl << "__2���� 4������ ���� ���� 10�� __" << endl;
	for (int i = 0; i < 10; i++)
	{
		
		int n = random.nextInRange(2, 4); // 2���� 4 ������ ������ ����
		cout << n << ' ';
	}
	cout << endl;


	Six random2;
	cout << "__ 0���� " << RAND_MAX << "������ ���� ���� 10�� __" << endl;
	for (int i = 0; i < 10; i++)
	{

		int n = random2.even_next(); // 0���� RAND_MAX(32767) ������ ������ ����
		cout << n << ' ';
	}
	cout << endl << endl << "__2���� 10������ ���� ���� 10�� __" << endl;
	for (int i = 0; i < 10; i++)
	{

		int n = random2.even_nextInRange(2, 10); // 2���� 4 ������ ������ ����
		cout << n << ' ';
	}
	cout << endl;

	return 0;
}