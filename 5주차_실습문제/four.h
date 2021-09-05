#pragma once
#include <iostream>
using namespace std;

class Point2
{
	int x, y;
public:
	Point2(int x, int y) { this->x = x; this->y = y; }
	int getX() { return x; }
	int getY() { return y; }
protected:
	void move(int x, int y) { this->x = x; this->y = y; }
};

class ColorPoint2 : public Point2
{
	string name;
public:
	ColorPoint2(int x = 0, int y = 0, string name = "BLACK") : Point2(x, y) { this->name = name; }
	void setPoint(int x, int y);
	void setColor(string name);
	void show();
};

void four_sol();


