#include "seven.h"
#include <iostream>
using namespace std;


bool MyIntStack::push(int n)
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

bool MyIntStack::pop(int& n)
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


void seven_sol()
{
	MyIntStack a;
	for (int i = 0; i < 11; i++)
	{
		if (a.push(i))
			cout << i << ' ';
		else
			cout << endl << i + 1 << " 번째 stack full" << endl;
	}
	int n;
	for (int i = 0; i < 11; i++)
	{
		if (a.pop(n))
			cout << n << ' ';
		else
			cout << endl << i + 1 << " 번째 stack empty";
	}
	cout << endl;
}