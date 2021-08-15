#pragma once
class MyIntStack_2
{
	int* p = nullptr;
	int size = 0;
	int tos = -1;

public:
	MyIntStack_2() {};
	MyIntStack_2(int size);
	MyIntStack_2(const MyIntStack_2& s);
	~MyIntStack_2();
	bool push(int n);
	bool pop(int& n);
};

void eight_sol();

