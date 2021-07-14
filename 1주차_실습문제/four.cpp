#include <iostream>
#include "four.h"
using namespace std;

void four()
{
	cout << "5개의 실수를 입력하라" << endl;
	double a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e;
	f = max(a, b);
	f = max(f, c);
	f = max(f, d);
	f = max(f, e);
	cout << "제일 큰 수 = " << f;
}