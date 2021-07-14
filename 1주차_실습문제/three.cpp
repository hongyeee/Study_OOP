#include <iostream>
#include "three.h"
using namespace std;

void three()
{
	cout << "두 수를 입력하라" << endl;
	int x, y;
	cin >> x >> y;
	if (x > y)
	{
		cout <<"큰 수 = " << x << endl;
	}
	else
	{
		cout << "큰 수 = " << y << endl;
	}
}