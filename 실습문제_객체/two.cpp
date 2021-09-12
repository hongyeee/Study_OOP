#include "two.h"
#include <iostream>
using namespace std;

void two_sol()
{
	const int number = 4;
	int* num = new int[number];
	cout << "정수 5개 입력 >> ";
	double sum = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> num[i];
		sum += num[i];
	}
	sum = sum / 5;
	cout << "평균 " << sum << endl;


}
