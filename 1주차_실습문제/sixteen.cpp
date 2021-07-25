#include "sixteen.h"
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

void sixteen()
{
	cout << "���� �ؽ�Ʈ�� �Է��ϼ��� ������׷��� �׸��ϴ�." << endl << " �ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�." << endl;
	const int n_size = 'z' - 'a' + 1;
	char text[10000];
	int result[n_size] = { 0 };
	cin.getline(text, 10000, ';');
	for (int i = 0; i < strlen(text); i++)
	{
		char id = text[i];
		if ('A' <= id <= 'Z')
		{
			char c = tolower(text[i]);
			int idx = c - 'a';
			result[idx] += 1;
		}

		else if ('a' <= id <= 'z')
		{
			int idx = text[i] - 'a';
			result[idx] += 1;
		}

		else
			continue;

	}
	for (int k = 0; k < n_size; k++)
	{
		char alpha = k + 'a';
		
		cout << alpha << "(" << result[k] << ")" << " : ";
		for (int i = 0; i < result[k]; i++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
}