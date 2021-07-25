#include "fifteen.h"
#include <iostream>
#include <string>
using namespace std;

void fifteen()
{
	int a, b, count = 0;
	string cal;
	while (count <5)
	{
		cout << "?" << endl;
		cin >> a >> cal >> b;
		if (cal == "+")
		{
			cout << a << " + " << b << " = " << a + b << endl;
			count++;
		}

		else if (cal == "-")
		{
			cout << a << " - " << b << " = " << a - b << endl; 
			count++;
		}

		else if (cal == "")
		{
			cout << a << " / " << b << " = " << a / b << endl;
			count++;
		}
		else
		{
			cout << a << " * " << b << " = " << a * b << endl;
			count++;
		}
	}
	


}