#include "two.h"
#include <iostream>
using namespace std;

NamedCircle2::NamedCircle2(int radius, string name)
{
	setRadius(radius);
	this->name = name;
}
void NamedCircle2::show()
{
	cout << "�������� " << getRadius() << "�� " << this->name << endl;

}

void two_sol()
{
	NamedCircle2 pizza[5];
	int max = 0, index = 0;
	for (int i = 0; i < 5; i++)
	{
		int size;
		string name;
		cout << i + 1 << ">> ";
		cin >> size >> name;
		pizza[i].setName(name);
		pizza[i].setRadius(size);
		if (max < size)
		{
			max = size;
			index = i;
		}
	}
	cout << "���� ������ ū ���ڴ� " << pizza[index].getName() << "�Դϴ�" << endl;
}