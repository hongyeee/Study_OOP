#include "Eight.h"
#include <iostream>
#include <cstring>
#include <string>
using namespace std;


Eight::Eight(int num)
{
	this->num = num;
}

Eight::Eight(string num)
{
	this->num = stoi(num);
}