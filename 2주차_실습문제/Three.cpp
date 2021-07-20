#include "Three.h"
#include <iostream>
#include <cstring>
using namespace std;

Three::Three(string name, int id, int balance)
{
	this->name = name;
	this->id = id;
	this->balance = balance;
}

void Three::deposit(int pluswon)
{
	balance += pluswon;
}
int Three::withdraw(int subwon)
{
	balance -= subwon;
	return subwon;
}
int Three::inquiry()
{
	return balance;
}
string Three::getOwner()
{
	return this->name;
}