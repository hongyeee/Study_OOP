// 1.5.1 new와 delete 연산자 //

#include <iostream>
#include "chapter1_005_001.h"

int fiveone_one()
{
	int* pData = new int;
	int* pNewData = new int(10);

	*pData = 5;
	std::cout << *pData << std::endl;
	std::cout << *pNewData << std::endl;

	delete pData;
	delete pNewData;

	return 0;

}

using namespace std;
int fiveone_two()
{
	int* arr = new int[5];
	for (int i = 0; i < 5; ++i)
		arr[i] = (i + 1) * 10;

	for (int i = 0; i < 5; ++i)
		cout << arr[i] << endl;

	delete[] arr;

	return 0;

}