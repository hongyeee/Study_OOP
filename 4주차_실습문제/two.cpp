#include <iostream>
using namespace std;
#include "two.h"

double half(double& n)
{
	n = n / 2;
	return n;

}

void two_sol()
{
	double n = 20;
	half(n);
	cout << n << endl;
}