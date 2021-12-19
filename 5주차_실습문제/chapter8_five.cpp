#include "five.h"
#include <iostream>
using namespace std;


void MyQueue::enqueue(int val)
{
	count++;
	put(count - 1, val);
}
int MyQueue::getCapacity()
{
	return BaseArray1::getCapacity();

}
int MyQueue::length()
{
	return count;
}
int MyQueue::dequeue()
{
	int temp = get(num);
	num++;
	count--;
	return temp;
}


void five_sol()
{
	MyQueue mQ(100);
	int n;
	cout << "큐에 삽일할 5개의 정수를 입력하라 >> " << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		mQ.enqueue(n);
	}
	cout << "큐의 용량 : " << mQ.getCapacity() << ", 큐의 크기 : " << mQ.length() << endl;
	cout << "큐의 원소를 순서대로 제거하여 출력한다 >> " << endl;
	while (mQ.length() != 0)
	{
		cout << mQ.dequeue() << ' ';
	}
	cout << endl << "큐의 현재 크기 : " << mQ.length() << endl;
}