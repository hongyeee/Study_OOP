#include "Six.h"
#include <iostream>
#include <cstring>
#include <cstdio>
#include <ctime>
using namespace std;


Six::Six()
{
	srand((unsigned)time(0));
}
int Six::even_next()
{
	int count = 0, n;
	while(count <1)
	{
		n = rand();
		if (n % 2 == 0)
		{
			count++;
		}
	}
	return n;
}

int Six::even_nextInRange(int start, int end)
{
	int count = 0, n;
	while (count <1)
	{
		n = (rand() % (end + 1 - start)) + start;
		if (n % 2 == 0)
		{
			count++;
		}
	}
	return n;

}