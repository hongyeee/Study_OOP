#include "eleven.h"
#include <iostream>
#include <string>
using namespace std;

void eleven()
{
	int n;
	int sum = 0;
	cout << "끝 수를 입력하세요 >> " << endl;
	cin >> n;
	for (int k = 1; k <= n; k++)
	{
		sum += k;
	}
	cout << "1에서 " << n << "까지의 합은 " << sum << "입니다" << endl;
}