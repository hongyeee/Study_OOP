#pragma once
#include <iostream>
using namespace std;

class Circle2
{
	int radius;
public:
	Circle2(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle2 : public Circle2
{
	string name;
public:
	NamedCircle2() {}
	NamedCircle2(int radius, string name);
	void setName(string name) { this->name = name; }
	string getName() { return name; }
	void show();
};

void two_sol();

