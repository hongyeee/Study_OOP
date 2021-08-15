#include "nine.h"
#include <iostream>
using namespace std;

Accumulator::Accumulator(int value)
{
	this->value = value;
}
Accumulator& Accumulator::add(int n)
{
	value += n;
	return *this;
}
int Accumulator::get()
{
	return value;
}

void nine_sol()
{
	Accumulator acc(10);
	acc.add(5).add(6).add(7);
	cout << acc.get() << endl;
}