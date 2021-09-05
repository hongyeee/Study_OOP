#include "four.h"
#include <iostream>
using namespace std;


void ColorPoint2::setPoint(int x, int y)
{
	move(x, y);
}
void ColorPoint2::setColor(string name)
{
	this->name = name;
}
void ColorPoint2::show()
{
	cout << this->name << " 색으로" << " (" << getX() << "," << getY() << ")에 위치한 점 입니다." << endl;
}


void four_sol()
{
	ColorPoint2 zeroPoint;
	zeroPoint.show();

	ColorPoint2 cp(5, 5);
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();

}