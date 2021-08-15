#include "five.h"
#include <iostream>
using namespace std;

void increaseBy(Circle& a, Circle& b)
{
	int r = a.getRadius() + b.getRadius();
	a.setRadius(r);
}
void five_sol()
{
	Circle x(10), y(5);
	increaseBy(x, y);
	x.show();
}
