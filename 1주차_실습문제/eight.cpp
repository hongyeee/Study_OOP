#include "eight.h"
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

void eight()
{
	char names[100];
	char* name = NULL;
	int length;
	string result;
	int max = 0;
	cout << "5���� �̸��� ';' ���� �����Ͽ� �Է��ϼ���" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin.getline(names, 100, ';');
		cout << i + 1 << " : " << names << endl;
		length = strlen(names);
		if (length > max)
		{
			max = length;
			result = names;
		}


	}
	cout << "���� �� �̸��� " << result << endl;

}
	/*for (int i = 0; i < 5; i++)
	{
		cout << i+1 <<  " : " << names[i] << endl;
	}

	for (int row = 0; row < 5; row++)
	{
		for (int col = 0; col < 100; col++)
		{
			if (names[row][col] == NULL)
			{
				length[row] = col;
				break;
			}
		}
		if (length[max] < length[row])
		{
			max = row;
		}
	}	
	cout << "���� �� �̸��� " << names[max] << endl;*/

