#include "ten.h"
#include <iostream>
#include <string>
using namespace std;

void ten()
{
	string str;
	cout << "문자열 입력 >> " << endl;
	cin >> str;
	int length = str.length();
	for (int i = 1; i < length+1; i++)
	{
		cout << str.substr(0, i) << endl;
	}
}