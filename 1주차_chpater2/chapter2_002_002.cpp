// 2.2 �Լ� ���� ����

// 2.2.2 ���� ���ǿ� ��ȣ��

#include <iostream>
#include "chapter2_002_002.h"
using namespace std;

void TestFunc(int a)
{
	cout << "TestFunc(int)" << endl;
}

void TestFunc(int a, int b = 10)
{
	cout << "TestFunc(int, int)" << endl;
}

void twotwo()
{
	// int a = 5�� �Լ��� ȣ������, int a = 5, int b = 10�� �Լ��� ���� ȣ������ ��ȣ�ؼ� ������ ���� �߻� 
	// TestFunc(5);

}