#include "six.h"
#include <iostream>
#include <string>
using namespace std;

void six()
{
	string key1, key2;
	cout << "새 암호를 입력하세요 >> " << endl;
	cin >> key1;
	cout << "새 암호를 다시 한 번 입력하세요 >> " << endl;
	cin >> key2;
	if (key1 == key2)
	{
		cout << "같습니다 " << endl;

	}
	else
		cout << "같지 않습니다" << endl;
}
