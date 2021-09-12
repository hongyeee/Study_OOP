#pragma once
#include <iostream>
using namespace std;
class Seat
{
	int num = 0;
	string name = "---";
public:
	Seat(int num = 0);
	void reserve(string name);
	void cancel(string name);
	string nameshow();
	
};

class Schedule
{
	const int seatcount = 8;
	Seat* seat[8];
	string time = " ";
public:
	Schedule(string time = " ");
	~Schedule();
	void reserve(int num, string name);
	void cancel(int num, string name);
	void seatshow();

};

class AirlineBook
{
	const int schedulecount = 3;
	Schedule* schedule[3];
public:

	AirlineBook();
	~AirlineBook();
	void reserve(int timenum, int num, string name);
	void cancel(int timenum, int num, string name);
	void scheduleseatshow(int num = 0);

};

void nine_sol();


