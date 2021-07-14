#include <iostream>
using namespace std;
#include "Chapter3_002.h"
#include "Chapter3_002_001_1.h"
#include "Chapter3_002_001_2.h"
#include "Chapter3_002_001_3.h"
#include "Chapter3_002_002.h"
#include "Chapter3_003_1.h"
#include "Chapter3_003_2.h"
#include "Chapter3_003_001.h"
#include "Chapter3_003_002.h"
#include "Chapter3_003_003_1.h"
#include "Chapter3_003_003_2.h"
#include "Chapter3_003_004.h"
#include "Chapter3_004_001.h"
#include "Chapter3_004_003.h"
#include "Chapter3_004_005.h"
#include "Chapter3_004_006.h"
#include "Chapter3_005.h"

// Chapter3_003_1 a; // ���� ������ ������ Ŭ������ �����ڰ� main() �Լ����� ���� ȣ��

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
	Chapter3_003_2 A(1);
	cout << "Before b" << endl;
	Chapter3_003_2 B(2);
	cout << "End" << endl;


	cout << "Begin" << endl;
	// new �����ڸ� �̿��� �������� ��ü�� �����Ѵ�.
	Chapter3_003_001* Data = new Chapter3_003_001;
	cout << "Test" << endl;

	// delete �����ڸ� �̿��� ��ü�� �����Ѵ�.
	delete Data;
	cout << "End" << endl;

	cout << "Begin" << endl;
	// �迭�� new ������ ������ �� �ִ�.
	Chapter3_003_001* nData = new Chapter3_003_001[3];

	// �迭�� ������ ���� �ݵ�� �迭�� �����Ѵ�.
	delete[] nData;
	// delete nData�� �ϸ� ù ��° ��� �ϳ��� �Ҹ��ϰ� �������� �״�� �޸𸮿� ���´�.
	cout << "End" << endl;


	int a = 10;
	Chapter3_003_002 k(a);
	cout << k.GetData() << endl;

	// ���� ������ a�� ���� �����Ǿ���.
	a = 20;
	cout << k.GetData() << endl;


	Chapter3_003_003_1 X(10);
	Chapter3_003_003_1 Y(3, 4);

	cout << X.GetData() << endl;
	cout << Y.GetData() << endl;


	// �Ű� ������ �ϳ��� �����ڸ� ȣ���Ѵ�.
	Chapter3_003_003_2 Begin(100);
	Begin.Print();

	Chapter3_003_003_2 End(50, 250);
	End.Print();


	Chapter3_003_004 test;
	cout << test.Data << endl;


	Chapter3_004_001 sample1(5), sample2(10);
	sample1.PrintData();
	sample2.PrintData();


	Chapter3_004_003 test1(10);
	cout << test1.GetData() << endl;


	Chapter3_004_005 test2(10);
	cout << test2.GetData() << endl;
	

	Chapter3_004_006 test3;
	
	// Chapter3_004_006::SetData(int) �޼��尡 ȣ��ȴ�.
	test3.SetData(10);
	cout << test3.GetData() << endl;

	Chapter3_004_006 test4;

	// Chapter3_004_006::SetData(double) �޼��尡 ȣ��ȴ�.
	test4.SetData(5.5);
	cout << test4.GetData() << endl;


	Chapter3_005 test5(5), test6(10);

	// ���� ����� ����
	cout << test5.GetCount() << endl;
	test6.ResetCount();

	//���� ����� ����. �ν��Ͻ� ���̵� ���� ����!
	cout << Chapter3_005::GetCount() << endl;

	return 0;
}