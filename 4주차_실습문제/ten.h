#pragma once
#include <iostream>
#include <cstring>
using namespace std;
class Buffer
{
	string text;
public:
	Buffer(string text) { this->text = text; }
	void add(string next) { text += next; }
	void print() { cout << text << endl; }
};

Buffer& append(Buffer& buf, string str);
void ten_sol();

