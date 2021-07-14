#include <iostream>
#include "two.h"
using namespace std;

void two()
{
	for (int n = 1; n < 10; n++)
	{
		if (n > 1)
		{
			cout << '\n';
		}
		for (int i = 1; i < 10; i ++)

		cout << i <<"X"<< n << "=" << i * n << '\t';

	}
	cout << "\n";
}