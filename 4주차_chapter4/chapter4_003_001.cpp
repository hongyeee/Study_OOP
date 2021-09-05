#include "chapter4_003_001.h"
#include <iostream>
using namespace std;


chapter4_003_001::chapter4_003_001(int param, char* name) : Data(param), Name(name)
{
	cout << "chapter4_003_001(int) : " << Name << endl;
}

chapter4_003_001::~chapter4_003_001()
{
	cout << "~chapter4_003_001() : " << this->Name << endl;
}

chapter4_003_001::chapter4_003_001(const chapter4_003_001& rhs) : Data(rhs.Data), Name(rhs.Name)
{
	cout << "chapter4_003_001(const chapter4_003_001&) : " << Name << endl;
}

chapter4_003_001& chapter4_003_001::operator=(const chapter4_003_001& rhs)
{
	cout << "operator=" << endl;
	// ���� ���������� �̸�(Name)�� �״�� �д�.
	Data = rhs.Data;

	return *this;
}

int chapter4_003_001::GetData() const
{
	return Data;
}
void chapter4_003_001::SetData(int param)
{
	Data = param;
}

chapter4_003_001 TestFunc(int param)
{
	// chapter4_003_001 Ŭ���� �ν��Ͻ��� a�� ���� ������.
	// ���� �Լ��� ��ȯ�Ǹ� �Ҹ��Ѵ�.
	chapter4_003_001 a(param, (char*) "a");

	return a;

}


void chapter4_003_001_example1()
{
	chapter4_003_001 b(5, (char*) "b");
	cout << "***** Before *****" << endl;

	// �Լ��� ��ȯ�Ǹ鼭 �ӽ� ��ü�� �����Ǿ��ٰ� ���� ���� �� ��� �Ҹ��Ѵ�.
	b = TestFunc(10);
	cout << "***** After *****" << endl;
	cout << b.GetData() << endl;

}

void chapter4_003_001_example2()
{
	
	cout << "***** Before *****" << endl;

	// �ڵ忡�� ���� �巯���� �ʴ� �̸� ���� �ӽ� ��ü�� ������ �� �Ҹ��Ѵ�.
	TestFunc(10);

	cout << "***** After *****" << endl;

}
