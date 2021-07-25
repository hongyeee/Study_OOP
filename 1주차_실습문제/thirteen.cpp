#include "thirteen.h"
#include <iostream>
#include <string>
using namespace std;


void thirteen()
{
	int num, people;
	cout << "***** 승리장에 오신 것을 환영합니다 *****" << endl;
	while (true)
	{
		cout << "짬뽕 : 1, 짜장 : 2, 군만두 : 3, 종료 : 4 >> " << endl;
		cin >> num;
		if (num > 4)
		{
			cout << "다시 주문하세요" << endl;
			continue;
		}
		else if (num == 1)
		{
			cout << " 몇인분 ? " << endl;
			cin >> people;
			cout << "짬뽕 " << people << "인분 나왔습니다" << endl;
			continue;
		}

		else if (num == 2)
		{
			cout << " 몇인분 ? " << endl;
			cin >> people;
			cout << "짜장 " << people << "인분 나왔습니다" << endl;
			continue;
		}

		else if (num == 3)
		{
			cout << " 몇인분 ? " << endl;
			cin >> people;
			cout << "군만두 " << people << "인분 나왔습니다" << endl;
			continue;
		}
		else
			break;
			
	}
}