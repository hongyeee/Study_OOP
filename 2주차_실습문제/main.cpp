#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
using namespace std;

#include "One.h"
#include "Two.h"
#include "Three.h"
#include "Four.h"
#include "Five.h"
#include "Six.h"
#include "Seven.h"
#include "Eight.h"
#include "Nine.h"
#include "Add.h"
#include "Sub.h"
#include "Mul.h"
#include "Div.h"
#include "Eleven.h"
#include "Twelve.h"




int main()
{
	One myTower; // 1����
	One seoulTower(100); // 100����
	cout << "���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;
	cout << endl;



	cout << endl;
	Two birth(2014, 3, 20); // 2014�� 3�� 20��
	Two independenceDay("1945/8/13"); // 1945�� 8�� 15��
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
	cout << endl;



	cout << endl;
	Three kitae("kitae", 1, 5000); // id 1��, �ܾ� 5000��, �̸��� kitae�� ���� ����
	kitae.deposit(50000); // 50000�� ����
	cout << kitae.getOwner() << "�� �ܾ��� " << kitae.inquiry() << endl;
	int money = kitae.withdraw(20000); // 20000�� ���
	cout << kitae.getOwner() << "�� �ܾ��� " << kitae.inquiry() << endl;
	cout << endl;



	cout << endl;
	Four coffeemachine(5, 10, 3); // Ŀ��: 5, ��: 10, ����: 6���� �ʱ�ȭ
	coffeemachine.drinkEspresso(); // Ŀ�� 1, �� 1 �Һ�
	coffeemachine.show();
	coffeemachine.drinkAmericano(); // Ŀ�� 1, �� 2 �Һ�
	coffeemachine.show();
	coffeemachine.drinkSugarCoffee(); // Ŀ�� 1, �� 2, ���� 1 �Һ�
	coffeemachine.show();
	coffeemachine.fill(); // Ŀ��: 10, ��: 10, ����: 10���� ä���
	coffeemachine.show();
	cout << endl;



	cout << endl;
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
	cout << endl;



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
	cout << endl;



	cout << endl;
	Seven random3;
	cout << "__ 0���� " << RAND_MAX << "������ ¦�� ���� ���� 10�� __" << endl;
	for (int i = 0; i < 10; i++)
	{

		int n = random3.even_selectable(); // 0���� RAND_MAX(32767) ������ ������ ����
		cout << n << ' ';
	}
	cout << endl << endl << "__2���� 9������ Ȧ�� ���� ���� 10�� __" << endl;
	for (int i = 0; i < 10; i++)
	{

		int n = random3.odd_selectable(2, 9); // 2���� 4 ������ ������ ����
		cout << n << ' ';
	}
	cout << endl;
	cout << endl;



	cout << endl;
	Eight integer1(30);
	cout << integer1.get() << ' '; // 30 ���
	integer1.set(50);
	cout << integer1.get() << ' '; // 50 ���

	Eight integer2("300");
	cout << integer2.get() << ' '; // 300 ���
	cout << integer2.isEven(); // Ture(������ 1) ���
	cout << endl;



	cout << endl;
	Nine oval1, oval2(3, 4);
	oval1.set(10, 20);
	oval1.show();
	cout << oval2.getWidth() << ", " << oval2.getHeight() << endl;
	cout << endl;
	return 0;
	cout << endl;



	cout << endl;
	Add a;
	Sub s;
	Mul m;
	Div d;
	int i = 0;

	while (i < 5)
	{

		int x, y;
		string cal;
		cout << "�� ������ �����ڸ� �Է��ϼ��� >> " << endl;
		cin >> x >> y >> cal;
		i++;
		if (cal == "+")
		{
			a.setValue(x, y);
			cout << a.calculate() << endl;
		}
		else if (cal == "-")
		{
			s.setValue(x, y);
			cout << s.calculate() << endl;
		}
		else if (cal == "*")
		{
			m.setValue(x, y);
			cout << m.calculate() << endl;
		}
		else
		{
			d.setValue(x, y);
			cout << d.calculate() << endl;
		}

	}
	cout << endl;



	cout << endl;
	Eleven box(10, 2);
	box.draw(); // �ڽ��� �׸���
	cout << endl;
	box.setSize(7, 4); // �ڽ��� ũ�⸦ �����Ѵ�
	box.setFill('^'); // �ڽ��� ���θ� ä�� ���ڸ� '^'�� �����Ѵ�
	box.draw(); // �ڽ��� �׸���
	cout << endl;




	cout << endl;
	Twelve ram;
	ram.write(100, 20);
	ram.write(104, 30);
	char res = ram.read(100) + ram.read(101);
	ram.write(102, res);
	cout << "102������ �� = " << (int)ram.read(102) << endl;
	cout << endl;
}
