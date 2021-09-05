#pragma once
#include <iostream>
using namespace std;
class Schedule
{
	string* seat;
public:
	Schedule() { seat = new string[8]; }
	~Schedule() { delete[] seat; }
	void push(int num, string name)
	{
		seat[num - 1] = name;
	}
};

