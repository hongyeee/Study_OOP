#pragma once
#include <iostream>
using namespace std;

class Circle1
{
	int radius;
public:
	Circle1(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle1 : public Circle1
{
	string name;
public:
	NamedCircle1() { }
	NamedCircle1(int radius, string name);
	void show();
};

void one_sol();
