#pragma once
class Dept
{
	int size = 0;
	int* scores;
public:
	Dept(int size);
	Dept(const Dept& dept);
	~Dept();
	int getSize() { return size; }
	void read();
	bool isOver60(int index);
};

int countPass(Dept dept);
void twelve_sol();
