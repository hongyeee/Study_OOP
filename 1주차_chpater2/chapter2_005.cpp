#include <iostream>
#include <cstdio>
#include "chapter2_005.h"
using namespace std;

// 2.5.1 ���� ��� ����
int nData(20);

void fiveone()
{
	int nData(10);
	cout << nData << endl;	// nData = 10
}

// 2.5.2 ���� ��� ����
void fivetwo()
{
	int nInput = 0;
	cout << "11 �̻��� ������ �Է��ϼ���" << endl;
	cin >> nInput;

	if (nInput > 10)
	{
		cout << nInput << endl;
	}

	else
		cout << "Error" << endl;

}	

// 2.5.3 ���� �ֱٿ� ����� ���� ����
int Data = 200;

namespace TEST3
{
	int Data = 100;
	void TestFunc(void)
	{
		cout << Data << endl;	// Data = 100
	}
}

/* ���������� ���ӽ����̽��� �������� ���� ���� ������ ����
int nData = 200;

namespace TEST3
{
	
	void TestFunc(void)
	{
		cout << Data << endl;	// Data = 200
	}
	int Data = 100;
}

*/



void fivethree()
{
	TEST3::TestFunc();
}

// 2.5.4 usgin ����� ��������
int nnData = 100;

namespace TEST4
{
	int nnData = 200;
}

void fivefour()
{
	cout << nnData << endl;

}

/*
int nnData = 100;

namespace TEST4
{
	int nnData = 200;
}

using namespace TEST4;

void fivefour()
{
	cout << nnData << endl; --> nnData = 100 or TEST4::nnData = 200 �� �� �־ ����

}
*/