#include <iostream>
#include "one.h"
using namespace std;

void one()
{
	for (int n = 1; n < 101; n++)
	{
		cout << n << '\t';

		if (n % 10 == 0)
		{
			cout << '\n';

		}
	}
}