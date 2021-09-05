#pragma once
class BaseMemory
{
	char* mem;
protected:
	BaseMemory(int size) { mem = new char[size]; }
	void push(int index, char num) { mem[index] = num; }
	char get(int index) { return mem[index]; }
};

class ROM : public BaseMemory
{
public:
	ROM(int size, char x[], int num) : BaseMemory(size)
	{
		for (int i = 0; i < num; i++)
		{
			push(i, x[i]);
		}
	}
	char read(int index)
	{
		return get(index);
	}

};
class RAM : public BaseMemory
{
public:
	RAM(int size) : BaseMemory(size) {}

	void write(int index, char num)
	{
		push(index, num);
	}
	char read(int index)
	{
		return get(index);
	}
};

void seven_sol();