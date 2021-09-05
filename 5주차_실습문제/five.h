#pragma once
class BaseArray1
{
private:
	int capacity;
	int* mem;
protected:
	BaseArray1(int capacity = 100) 
	{
		this->capacity = capacity; 
		mem = new int[capacity];
	}
	~BaseArray1()
	{
		delete[] mem;
	}
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};

class MyQueue : public BaseArray1
{
	int count = 0;
	int num = 0;
public:
	MyQueue(int capacity) : BaseArray1(100) {}
	void enqueue(int val);
	int getCapacity();
	int length();
	int dequeue();


};

void five_sol();