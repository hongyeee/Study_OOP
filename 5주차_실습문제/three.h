#pragma once
#include <iostream>
using namespace std;

class Point1
{
	int x, y;
public:
	Point1(int x, int y) { this->x = x; this->y = y; }
	int getX() { return x; }
	int getY() { return y; }
protected:
	void move(int x, int y) { this->x = x; this->y = y; }
};

class ColorPoint1 : public Point1
{
	string name;
public:
	ColorPoint1(int x, int y, string name) : Point1(x, y) { this->name = name; }
	void setPoint(int x, int y);
	void setColor(string name);
	void show();
};

void three_sol();
