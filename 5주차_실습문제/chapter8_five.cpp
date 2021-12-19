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
	cout << "ť�� ������ 5���� ������ �Է��϶� >> " << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		mQ.enqueue(n);
	}
	cout << "ť�� �뷮 : " << mQ.getCapacity() << ", ť�� ũ�� : " << mQ.length() << endl;
	cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ� >> " << endl;
	while (mQ.length() != 0)
	{
		cout << mQ.dequeue() << ' ';
	}
	cout << endl << "ť�� ���� ũ�� : " << mQ.length() << endl;
}