#include <iostream>
#include "chapter2_001.h"
using namespace std;

// nParam �Ű������� ����Ʈ ���� 10�̴�.
int TestFunc(int nParam = 10)
{
	return nParam;
}

void one()
{
	// ȣ���ڰ� ���μ��� ������� �ʾ����Ƿ� ����Ʈ ���� �����Ѵ�.
	cout << TestFunc() << endl;

	//ȣ���ڰ� ���μ��� Ȯ�������Ƿ� ����Ʈ ���� �����Ѵ�.
	cout << TestFunc(20) << endl;

}