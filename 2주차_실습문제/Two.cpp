#include "Two.h"
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

Two::Two(int year, int month, int day)
{
	this->year = year;
	this->month = month;
	this->day = day;
}

Two::Two(string newdata)
{		
	string y, m, d;
	int index[2] = { 0 };
	int count = 0;
	int length = newdata.length();

	for (int i = 0; i < length; i++)
	{
		if (newdata[i] == '/')
		{
			index[count] = i;
			count++;
		}
			
	}

	y = newdata.substr(0, index[0] - 1);
	m = newdata.substr(index[0]+1, index[1] - 1);
	d = newdata.substr(index[1] + 1, -1);
	year = stoi(y);
	month = stoi(m);
	day = stoi(d);
}

void Two::show()
{
	cout << year << "³â" << month << "¿ù" << day << "ÀÏ" << endl;
}
int Two::getYear()
{
	return year;
}
int Two::getMonth() 
{
	return month;
}
int Two::getDay()
{
	return day;
}