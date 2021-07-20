#include "Five.h"
#include <iostream>
#include <cstring>
#include <cstdio>
#include <ctime>
using namespace std;


Five::Five() 
{
	srand((unsigned)time(0));
}
int Five::next()
{
	int n = rand();
	return n;
}

int Five::nextInRange(int start, int end)
{
	int n = (rand() % (end + 1 - start)) + start;
	return n;

}