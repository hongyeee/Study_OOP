// 1.6 ������ ����

//1.6.2 r-value ����

#include <iostream>
#include "chapter1_006_002.h"
using namespace std;

int TestFunc(int nParam)
{
	int nRestult = nParam * 2;

	return nRestult;
}

void sixtwo()
{
	int nInput = 0;
	cout << "Input number: ";
	cin >> nInput;

	// ��� �������� ������� �ӽ� ��ü�� ���� r-value ����
	int&& rdata = nInput + 5;
	cout << rdata << endl;

	// �Լ� ��ȯ���� ������� �ӽ� ��ü�� ���� r-value ����
	int&& result = TestFunc(10);

	// ���� ������ �� �ִ�.
	result += 10;
	cout << result << endl;

}
