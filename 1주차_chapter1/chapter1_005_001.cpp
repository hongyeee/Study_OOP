//1.5 메모리 동적 할당

// 1.5.1 new와 delete 연산자 

#include <iostream>
#include "chapter1_005_001.h"

int fiveone_one()
{
	// 인스턴스만 동적으로 생성하는 경우
	int* pData = new int;

	// 초기값을 기술하는 경우
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
	// 객체를 배열 형태로 동적 생성한다
	int* arr = new int[5];
	for (int i = 0; i < 5; ++i)
		arr[i] = (i + 1) * 10;

	for (int i = 0; i < 5; ++i)
		cout << arr[i] << endl;

	//배열 형태로 생성한 대상은 반드시 배열 형태로 통해 삭제한다
	delete[] arr;

	return 0;

}