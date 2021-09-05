#include "eight.h"
#include <iostream>
using namespace std;

void eigth_sol()
{
	string answer = "y";
	InkJetPrinter ink("Officeje V40", "HP", 0, 5, 10 );
	LaserPrinter laser("SCX-6x45", "삼성전자", 0, 3, 20);
	cout << "현재 작동중인 2대의 프린터는 아래와 같다" << endl;
	cout << "잉크젯 : " << ink.getmodel() << ", " << ink.getmanufacturer() << ", 남은 종이 : " << ink.getavailableCount() << ", 남은 잉크 : " << ink.getInk() << endl;
	cout << "레이저 : " << laser.getmodel() << ", " << laser.getmanufacturer() << ", 남은 종이 : " << laser.getavailableCount() << ", 남은 잉크 : " << laser.getToner() << endl;
	while (answer == "y")
	{
		int num, pages;
		cout << "프린터(1 : 잉크젯, 2 : 레이저)와 매수 입력 >> " << endl;
		cin >> num >> pages;
		if (num == 1)
		{
			if (pages <= ink.getavailableCount())
			{
				if (pages <= ink.getInk())
				{
					ink.printInkJet(pages);
					cout << "프린트 하였습니다" << endl;
				}
				else
				{
					cout << "잉크가 부족하여 프린트 할 수 없습니다" << endl;
				}
				
			}
			else
			{
				cout << "용지가 부족하여 프린트 할 수 없습니다" << endl;
			}
		}
		else
		{
			if (pages <= laser.getavailableCount())
			{
				if (pages <= laser.getToner())
				{
					laser.printLaser(pages);
					cout << "프린트 하였습니다" << endl;
				}
				else
				{
					cout << "토너가 부족하여 프린트 할 수 없습니다" << endl;
				}

			}
			else
			{
				cout << "용지가 부족하여 프린트 할 수 없습니다" << endl;
			}

		}
		cout << ink.getmodel() << ", " << ink.getmanufacturer() << ", 남은 종이 : " << ink.getavailableCount() << ", 남은 잉크 : " << ink.getInk() << endl;
		cout << laser.getmodel() << ", " << laser.getmanufacturer() << ", 남은 종이 : " << laser.getavailableCount() << ", 남은 잉크 : " << laser.getToner() << endl;
		cout << "계속 프린트 하시겠습니까 (y/n) >> " << endl;
		cin >> answer;



	}
}