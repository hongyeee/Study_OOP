#include "twelve.h"
#include <iostream>
#include <string>
using namespace std;

int twelve(int a, int b)
{
	int k = a, res = 0;
	for (k; k <= b; k++)
	{
		res += k;
	}
	return res;
}

void twelve_solution()
{
	int n;
	cout << "끝 수를 입력하세요 >> " << endl;
	cin >> n;
	cout << "1에서 " << n << "까지의 합은 " << twelve(1, n) << "입니다" << endl;
}