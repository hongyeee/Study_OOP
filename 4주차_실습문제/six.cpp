#include "six.h"
#include <iostream>
using namespace std;

char& find(char a[], char c, bool& success)
{
	int length = strlen(a);
	int location = 0;
	for (int i = 0; i < length; i++)
	{
		if (a[i] == c)
		{
			success = true;
			location = i;
		}
		else
			continue;
			
	}
	return a[location];
}

void six_sol()
{
	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b);
	if (b == false)
	{
		cout << "M을 발견할 수 없다" << endl;
	}
	loc = 'm';
	cout << s << endl;
}