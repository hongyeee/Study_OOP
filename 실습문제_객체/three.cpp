#include "three.h"
#include <iostream>
#include <string>
using namespace std;

void three_sol1()
{
	string sentense;
	int count = 0;
	cout << "���ڿ� �Է� >>" << endl;
	getline(cin, sentense);
	int length = size(sentense);
	for (int i = 0; i < length; i++)
	{
		if (sentense[i] == 'a')
		{
			count++;
		}
	}
	cout << "���� a�� " << count << "�� �ֽ��ϴ�.";
}

void three_sol2()
{
	string sentense;
	int count = 0, index = 0;
	cout << "���ڿ� �Է� >>" << endl;
	getline(cin, sentense);
	int length = size(sentense);
	while (index != -1)
	{
		if(count == 0)
		{
			index = sentense.find('a', index);
		}
		else
			index = sentense.find('a', index+1);
		if (index != -1)
			count++;
		
	}
	cout << "���� a�� " << count << "�� �ֽ��ϴ�.";
}