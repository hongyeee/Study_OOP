#include "eight.h"
#include <iostream>
using namespace std;

MyIntStack_2::MyIntStack_2(int size)
{
	this->size = size;
	p = new int[size];
}

MyIntStack_2::~MyIntStack_2()
{
	if (p != nullptr)
		delete[] p;
}

MyIntStack_2::MyIntStack_2(const MyIntStack_2& s)
{
	this->p = new int[size];
	for (int i = 0; i < size; i++)
	{
		p[i] = s.p[i];
	}
	this->size = s.size;
	this->tos = s.tos;
}

bool MyIntStack_2::push(int n)
{
	if (tos < 9)
	{
		tos++;
		p[tos] = n;

		return true;
	}
	else
		return false;

}

bool MyIntStack_2::pop(int& n)
{
	if (tos > -1)
	{
		n = p[tos];
		tos--;
		return true;
	}
	else
		return false;
}


void eight_sol()
{
	MyIntStack_2 a(10);
	a.push(10);
	a.push(20);
	MyIntStack_2 b = a;
	b.push(30);

	int n;
	a.pop(n);
	cout << "스택 a 에서 팝한 값 " << n << endl;
	b.pop(n);
	cout << "스택 b 에서 팝한 값 " << n << endl;


}