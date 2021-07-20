#pragma once
class Four
{
	int coffee, water, sugar;
public:
	Four(int coffee = 0, int water = 0, int sugar = 0);
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugarCoffee();
	void fill();
	void show();
};

