#include <iostream>
using namespace std;
#include "Chapter3_002.h"
#include "Chapter3_002_001_1.h"
#include "Chapter3_002_001_2.h"
#include "Chapter3_002_001_3.h"
#include "Chapter3_002_002.h"
#include "Chapter3_003_1.h"
#include "Chapter3_003_2.h"

Chapter3_003_1 a; // ���� ������ ������ Ŭ������ �����ڰ� main() �Լ����� ���� ȣ��

int main()
{
	Chapter3_002 user = { 10, "ö��" };
	user.Print();

	Chapter3_002_001_1 t; // ������ ȣ��
	t.PrintData();

	cout << "_pmain() �Լ� ����" << endl;
	Chapter3_002_001_2 p;
	p.PrintData();
	cout << "_pmain() �Լ� ��" << endl;

	Chapter3_002_001_3 i;
	i.PrintData();

	Chapter3_002_002 data;
	data.SetData(10);
	cout << data.GetData() << endl;

	cout << "Begin" << endl;
	Chapter3_003_1 b;
	cout << "End" << endl;

	cout << "Begin" << endl;
	// new �����ڸ� �̿��� �������� ��ü�� �����Ѵ�.
	Chapter3_003_2* Data = new Chapter3_003_2;
	cout << "Test" << endl;

	// delete �����ڸ� �̿��� ��ü�� �����Ѵ�.
	delete Data;
	cout << "End" << endl;

	cout << "Begin" << endl;
	// �迭�� new ������ ������ �� �ִ�.
	Chapter3_003_2* nData = new Chapter3_003_2[3];

	// �迭�� ������ ���� �ݵ�� �迭�� �����Ѵ�.
	delete[] nData;
	// delete nData�� �ϸ� ù ��° ��� �ϳ��� �Ҹ��ϰ� �������� �״�� �޸𸮿� ���´�.
	cout << "End" << endl;


	return 0;
}