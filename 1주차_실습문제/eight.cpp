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
	cout << "5명의 이름을 ';' 으로 구분하여 입력하세요" << endl;
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
	cout << "가장 긴 이름은 " << result << endl;

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
	cout << "가장 긴 이름은 " << names[max] << endl;*/

