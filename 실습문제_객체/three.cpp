#include "three.h"
#include <iostream>
#include <string>
using namespace std;

void three_sol1()
{
	string sentense;
	int count = 0;
	cout << "문자열 입력 >>" << endl;
	getline(cin, sentense);
	int length = size(sentense);
	for (int i = 0; i < length; i++)
	{
		if (sentense[i] == 'a')
		{
			count++;
		}
	}
	cout << "문자 a는 " << count << "개 있습니다.";
}

void three_sol2()
{
	string sentense;
	int count = 0, index = 0;
	cout << "문자열 입력 >>" << endl;
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
	cout << "문자 a는 " << count << "개 있습니다.";
}