#include "three.h"
#include <iostream>
using namespace std;


void ColorPoint1::setPoint(int x, int y)
{
	move(x, y);
}
void ColorPoint1::setColor(string name)
{
	this->name = name;
}
void ColorPoint1::show()
{
	cout << this->name << " ������" << " (" << getX() << "," << getY() << ")�� ��ġ�� �� �Դϴ�." << endl;
}


void three_sol()
{
	ColorPoint1 cp(5, 5, "RED");
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();

}