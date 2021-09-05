#include "seven.h"
#include <iostream>
using namespace std;

void seven_sol()
{
	char x[5] = { 'h', 'e', 'l', 'l', 'o' };
	ROM biosROM(1024 * 10, x, 5);
	RAM mainMemory(1024 * 1024);
	for (int i = 0; i < 5; i++)
	{
		mainMemory.write(i, biosROM.read(i));
	}
	for (int i = 0; i < 5; i++)
	{
		cout << mainMemory.read(i);
	}

}