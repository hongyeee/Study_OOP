#pragma once
#include <string>
#include <iostream>
using namespace std;
class Two
{
	int year, month, day;
public:
	Two(int year, int month, int day);
	Two(string newdata);
	void show();
	int getYear(), getMonth(), getDay();
};

