#include <iostream>
#include "four.h"
using namespace std;

void four()
{
	cout << "5���� �Ǽ��� �Է��϶�" << endl;
	double a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e;
	f = max(a, b);
	f = max(f, c);
	f = max(f, d);
	f = max(f, e);
	cout << "���� ū �� = " << f;
}