#pragma once
class MyIntStack
{
	int p[10] = { '0' };
	int tos = -1;
public:
	bool push(int n);
	bool pop(int& n);
};

void seven_sol();