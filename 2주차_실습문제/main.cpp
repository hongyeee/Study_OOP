#include <iostream>
using namespace std;
#include "One.h"
#include "Two.h"

int main()
{
	One myTower; // 1����
	One seoulTower(100); // 100����
	cout << "���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;


	Two birth(2014, 3, 20); // 2014�� 3�� 20��
	Two independenceDay("1945/8/13"); // 1945�� 8�� 15��
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;



	return 0;
}