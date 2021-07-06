#include <iostream>
#include <cstdio>
#include "chapter2_005.h"
using namespace std;

// 2.5.1 현재 블록 범위
int nData(20);

void fiveone()
{
	int nData(10);
	cout << nData << endl;	// nData = 10
}

// 2.5.2 상위 블록 범위
void fivetwo()
{
	int nInput = 0;
	cout << "11 이상의 정수를 입력하세요" << endl;
	cin >> nInput;

	if (nInput > 10)
	{
		cout << nInput << endl;
	}

	else
		cout << "Error" << endl;

}	

// 2.5.3 가장 최근에 선언된 전역 변수
int Data = 200;

namespace TEST3
{
	int Data = 100;
	void TestFunc(void)
	{
		cout << Data << endl;	// Data = 100
	}
}

/* 전역변수는 네임스페이스를 생각하지 말고 선언 순서를 생각
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

// 2.5.4 usgin 선언과 전역변수
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
	cout << nnData << endl; --> nnData = 100 or TEST4::nnData = 200 일 수 있어서 오류

}
*/