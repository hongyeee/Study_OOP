#include <iostream>
#include "five.h"
using namespace std;

void five()
{
	char words[100];
	cout << "���ڵ��� �Է��϶� (100�� �̸�)" << endl;
	cin.getline(words, 100, '\n');
	int count = 0;
	for (int i = 0; i < sizeof(words); i++)
	{
		if (words[i] == ' ')
		{
			count += 1;
		}
	}
	cout << "x�� ������ " << count << endl;
	
}