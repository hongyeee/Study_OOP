#pragma once
class Accumulator
{
	int value;
public:
	Accumulator(int value = 0);
	Accumulator& add(int n = 0);
	int get();
};

void nine_sol();