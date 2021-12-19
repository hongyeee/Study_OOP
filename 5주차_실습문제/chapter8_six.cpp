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
	cout << "���ÿ� ������ 5���� ������ �Է��϶� >> " << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		mStack.push(n);
	}
	cout << "������ �뷮 : " << mStack.capacity() << ", ������ ũ�� : " << mStack.length() << endl;
	cout << "������ ���Ҹ� ������� �����Ͽ� ����Ѵ� >> " << endl;
	while (mStack.length() != 0)
	{
		cout << mStack.pop() << ' ';
	}
	cout << endl << "������ ���� ũ�� : " << mStack.length() << endl;
}