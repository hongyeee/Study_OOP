#include "Seven.h"
#include <iostream>
#include <cstring>
#include <cstdio>
#include <ctime>
using namespace std;


Seven::Seven()
{
	srand((unsigned)time(0));
}


int Seven::even_selectable(int start, int end)
{
	int count = 0, n;
	while (count < 1)
	{
		if (start == 0 && end == 0)
			n = rand();
		else
			n = (rand() % (end + 1 - start)) + start;
		if (n % 2 == 0)
		{
			count++;
		}
	}
	return n;

}

int Seven::odd_selectable(int start, int end)
{
	int count = 0, n;
	while (count < 1)
	{
		if (start == 0 && end == 0)
			n = rand();
		else
			n = (rand() % (end + 1 - start)) + start;
		if (n % 2 != 0)
		{
			count++;
		}
	}
	return n;

}