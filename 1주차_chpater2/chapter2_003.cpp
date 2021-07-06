// 2.3 인라인 함수

#include <iostream>
#include <cstdio>
#include "chapter2_003.h"
using namespace std;

#define ADD(a, b)((a)+(b))

int Add2(int a, int b)
{
	return a + b;
}

inline int AddNew(int a, int b)
{
	return a + b;
}

void three()
{
	int a, b;
	scanf_s("%d%d", &a, &b);

	printf("ADD(): %d\n", ADD(a, b));
	printf("Add(): %d\n", Add2(a, b));
	printf("AddNew(): %d", AddNew(a, b));

}