#pragma once
#include <iostream>
using namespace std;

class Book
{
	string title;
	int price;
public:
	Book(string title, int price);
	~Book();
	Book(const Book& book);
	void set(string title, int price);
	void show() { cout << title << ' ' << price << "¿ø" << endl; }
};

void eleven_sol();

