#include "four.h"
#include <iostream>
using namespace std;


bool bigger(int a, int b, int& big)
{
	if (a == b)
	{
		big = a;
		cout << big << endl;
		return true;
	}
		
	else if (a > b)
	{
		big = a;
		cout << big << endl;
		return false;
	}
	else
	{
		big = b;
		cout << big << endl;
		return false;
	}
		
}

void four_sol()
{
	int a, b, big = 0;
	cout << "���� �� ���� �Է��ϼ��� >> " << endl;
	cin >> a >> b;
	bigger(a, b, big);
	
}