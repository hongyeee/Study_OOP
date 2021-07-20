#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Three
{
	int balance, id;
	string name;

public:
	Three(string, int, int);
	void deposit(int pluswon);
	int withdraw(int subwon);
	int inquiry();
	string getOwner();

};

