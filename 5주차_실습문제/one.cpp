#include "one.h"
#include <iostream>
using namespace std;



NamedCircle1::NamedCircle1(int radius, string name)
{
	setRadius(radius);
	this->name = name;
}
void NamedCircle1::show()
{
	cout << "�������� " << getRadius() << "�� " << this->name << endl;

}


void one_sol()
{
	NamedCircle1 waffle(3, "waffle");
	waffle.show();
	
}
