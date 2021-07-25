#include "nine.h"
#include <iostream>
#include <string>
using namespace std;

void nine()
{
	string name, address, age;
	cout << "이름은? " << endl;
	getline(cin, name);
	cout << "주소는? " << endl;
	getline(cin, address);
	cout << "나이는? " << endl;
	cin >> age;
	cout << name << ", " << address << " , " << age << "세" << endl;
} 