//1.5 �޸� ���� �Ҵ�

// 1.5.1 new�� delete ������ 

#include <iostream>
#include "chapter1_005_001.h"

int fiveone_one()
{
	// �ν��Ͻ��� �������� �����ϴ� ���
	int* pData = new int;

	// �ʱⰪ�� ����ϴ� ���
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
	// ��ü�� �迭 ���·� ���� �����Ѵ�
	int* arr = new int[5];
	for (int i = 0; i < 5; ++i)
		arr[i] = (i + 1) * 10;

	for (int i = 0; i < 5; ++i)
		cout << arr[i] << endl;

	//�迭 ���·� ������ ����� �ݵ�� �迭 ���·� ���� �����Ѵ�
	delete[] arr;

	return 0;

}