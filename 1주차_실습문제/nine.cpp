#include "nine.h"
#include <iostream>
#include <string>
using namespace std;

void nine()
{
	string name, address, age;
	cout << "�̸���? " << endl;
	getline(cin, name);
	cout << "�ּҴ�? " << endl;
	getline(cin, address);
	cout << "���̴�? " << endl;
	cin >> age;
	cout << name << ", " << address << " , " << age << "��" << endl;
} 