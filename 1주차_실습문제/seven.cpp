#include "seven.h"
#include <iostream>
#include <string>
using namespace std;

void seven()
{
	int count = 0;
	while (count <1)
	{
		string answer;
		cout << "�����ϰ� ������ yes�� �Է��ϼ���" << endl;
		cin >> answer;
		if (answer == "yes")
		{
			cout << "�����մϴ� ...." << endl;
			count++;

		}
	}
}