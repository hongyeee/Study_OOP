#include "Twelve.h"
#include <iostream>
using namespace std;

Twelve::Twelve()
{
	*mem = {0};
	size = 100 * 1024;
}

Twelve::~Twelve()
{
	cout << "�޸� ���ŵ�" << endl;
}

char Twelve::read(int address)
{
	return mem[address];
}

void Twelve::write(int address, char value)
{
	mem[address] = value;
}