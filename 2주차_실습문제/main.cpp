#include <iostream>
using namespace std;
#include "One.h"
#include "Two.h"

int main()
{
	One myTower; // 1미터
	One seoulTower(100); // 100미터
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;


	Two birth(2014, 3, 20); // 2014년 3월 20일
	Two independenceDay("1945/8/13"); // 1945년 8월 15일
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;



	return 0;
}