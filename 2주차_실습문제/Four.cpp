#include "Four.h"
#include <iostream>
#include <cstring>
using namespace std;

Four::Four(int coffee, int water, int sugar)
{
	this->coffee = coffee;
	this->water = water;
	this->sugar = sugar;
}

void Four::drinkEspresso()
{
	coffee -= 1;
	water -= 1;
}
void Four::drinkAmericano()
{
	coffee -= 1;
	water -= 2;
}
void Four::drinkSugarCoffee()
{
	coffee -= 1;
	water -= 1;
	sugar -= 1;
}
void Four::fill()
{
	coffee = 10;
	water = 10;
	sugar = 10;
}
void Four::show()
{
	cout << "Ŀ�� �ӽ� ����, Ŀ��: " << coffee << "	��: " << water << " ����: " << sugar << endl;
}