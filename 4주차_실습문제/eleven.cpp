#include "eleven.h"
#include <iostream>
using namespace std;

Book::Book(string title, int price)
{
	this->title = title;
	this->price = price;
}
Book::~Book()
{

}
Book::Book(const Book& book)
{
	this->title = book.title;
	this->price = book.price;
}
void Book::set(string title, int price)
{
	this->title = title;
	this->price = price;

}

void eleven_sol()
{
	Book cpp("명품 C++", 10000);
	Book java = cpp;
	java.set("명품 자바", 12000);
	cpp.show();
	java.show();

}