#pragma once
class BaseArray2
{
private:
	int capacity;
	int* mem;
protected:
	BaseArray2(int capacity = 100)
	{
		this->capacity = capacity;
		mem = new int[capacity];
	}
	~BaseArray2()
	{
		delete[] mem;
	}
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};

class MyStack : public BaseArray2
{
	int count = -1;
public:
	MyStack(int capacity) : BaseArray2(100) {}
	void push(int val);
	int capacity();
	int length();
	int pop();
};

void six_sol();