#include "ten.h"
#include <iostream>
#include <string>
using namespace std;

void ten()
{
	string str;
	cout << "���ڿ� �Է� >> " << endl;
	cin >> str;
	int length = str.length();
	for (int i = 1; i < length+1; i++)
	{
		cout << str.substr(0, i) << endl;
	}
}