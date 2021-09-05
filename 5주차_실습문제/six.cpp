#include "six.h"
#include <iostream>
using namespace std;

void MyStack::push(int val)
{
	count++;
	put(count, val);
}
int MyStack::capacity()
{
	return getCapacity();

}
int MyStack::length()
{
	return count+1;
}
int MyStack::pop()
{
	int temp = get(count);
	count--;
	return temp;
}

void six_sol()
{
	MyStack mStack(100);
	int n;
	cout << "스택에 삽일할 5개의 정수를 입력하라 >> " << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		mStack.push(n);
	}
	cout << "스택의 용량 : " << mStack.capacity() << ", 스택의 크기 : " << mStack.length() << endl;
	cout << "스택의 원소를 순서대로 제거하여 출력한다 >> " << endl;
	while (mStack.length() != 0)
	{
		cout << mStack.pop() << ' ';
	}
	cout << endl << "스택의 현재 크기 : " << mStack.length() << endl;
}