#include <iostream>
#include "five.h"
using namespace std;

void five()
{
	char words[100];
	cout << "문자들을 입력하라 (100개 미만)" << endl;
	cin.getline(words, 100, '\n');
	int count = 0;
	for (int i = 0; i < sizeof(words); i++)
	{
		if (words[i] == ' ')
		{
			count += 1;
		}
	}
	cout << "x의 개수는 " << count << endl;
	
}