#include "nine.h"
#pragma once
#include <iostream>
using namespace std;

Seat::Seat(int num) 
{ 
	this->num = num; 
}
void Seat::reserve(string name) 
{ 
	this->name = name;
}
void Seat::cancel(string name) 
{ 
	this->name = "---";
}
string Seat::nameshow()
{ 
	return name; 
}



Schedule::Schedule(string time)
{
	this->time = time;
	for (int i = 0; i < seatcount; i++)
	{
		seat[i] = new Seat(i);
	}
}

Schedule::~Schedule()
{
	for (int i = 0; i < seatcount; i++)
	{
		delete seat[i];
	}

}

void Schedule::reserve(int num, string name)
{
	seat[num]->reserve(name);
}
void Schedule::cancel(int num, string name)
{
	seat[num]->cancel(name);
}

void Schedule::seatshow()
{
	cout << time << " :";
	for (int i = 0; i < 8; i++)
	{
		cout << "   " << seat[i]->nameshow();
	}
	cout << endl;
}



AirlineBook::AirlineBook()
{
	schedule[0] = new Schedule(" 07�� ");
	schedule[1] = new Schedule(" 12�� ");
	schedule[2] = new Schedule(" 17�� ");
}

AirlineBook::~AirlineBook()
{
	for (int i = 0; i < 3; i++)
	{
		delete schedule[i];
	}
}

void AirlineBook::reserve(int timenum, int num, string name)
{
	schedule[timenum]->reserve(num, name);
}

void AirlineBook::cancel(int timenum, int num, string name)
{
	schedule[timenum]->cancel(num, name);
}

void AirlineBook::scheduleseatshow(int num)
{
	schedule[num]->seatshow();
}


void nine_sol()
{
	AirlineBook airlinebook;
	int number, timenumber, seatnum;
	string name;
	cout << " ***** �Ѽ��װ��� ���Ű��� ȯ���մϴ�. *****" << endl;
	while (true)
	{
		cout << endl << "���� : 1, ��� : 2, ���� : 3, ������ : 4 >> ";
		cin >> number;
		if (number < 3)
		{
			cout << "07�� : 1, 12�� : 2, 17�� : 3 >> ";
			cin >> timenumber;
			airlinebook.scheduleseatshow(timenumber );
			cout << "�¼� ��ȣ >>";
			cin >> seatnum;
			cout << " �̸� �Է� >> ";
			cin >> name;
			if (number == 1)
			{
				airlinebook.reserve(timenumber , seatnum , name);
			}
			else
			{
				airlinebook.cancel(timenumber , seatnum , name);
			}
		}
		else if (number == 3)
		{
			airlinebook.scheduleseatshow(0);
			airlinebook.scheduleseatshow(1);
			airlinebook.scheduleseatshow(2);

		}
		else
		{
			break;
		}
	}
	

}