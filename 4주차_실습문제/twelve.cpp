#include "twelve.h"
#include <iostream>
using namespace std;


Dept::Dept(int size)
{
	this->size = size;
	scores = new int[size];
}

Dept::Dept(const Dept& dept)
{
	this->size = dept.size;
	this->scores = new int[size];
	for (int i = 0; i < size; i++)
	{
		scores[i] = dept.scores[i];
	}

	
}

Dept::~Dept()
{
	delete[] scores;
}

void Dept::read()
{
	cout << "10�� ���� �Է�>> " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> scores[i];
	}
}

bool Dept::isOver60(int index)
{
	if (scores[index] > 60)
	{
		return true;
	}
	else
		return false;
}

int countPass(Dept dept)
{
	int count = 0;
	for (int i = 0; i < dept.getSize(); i++)
	{
		if (dept.isOver60(i))
			count++;
	}
	return count;
}

void twelve_sol()
{
	Dept com(10);
	com.read();
	int n = countPass(com);
	cout << "60�� �̻��� " << n << "��";

}