#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Eight
{
	int num;
public:
	Eight(int num);
	Eight(string num);
	int get()
	{
		return num;
	}
	int set(int new_num)
	{
		this->num = new_num;
		return num;
		
	}
	int isEven()
	{
		if (num % 2 == 0)
			return 1;
		else
			return 0;
	}

};
