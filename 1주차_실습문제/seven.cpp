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
		cout << "종료하고 싶으면 yes를 입력하세요" << endl;
		cin >> answer;
		if (answer == "yes")
		{
			cout << "종료합니다 ...." << endl;
			count++;

		}
	}
}