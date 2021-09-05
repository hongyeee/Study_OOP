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
	// 값은 변경하지만 이름(Name)은 그대로 둔다.
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
	// chapter4_003_001 클래스 인스턴스인 a는 지역 변수다.
	// 따라서 함수가 반환되면 소멸한다.
	chapter4_003_001 a(param, (char*) "a");

	return a;

}


void chapter4_003_001_example1()
{
	chapter4_003_001 b(5, (char*) "b");
	cout << "***** Before *****" << endl;

	// 함수가 반환되면서 임시 객체가 생성되었다가 대입 연산 후 즉시 소멸한다.
	b = TestFunc(10);
	cout << "***** After *****" << endl;
	cout << b.GetData() << endl;

}

void chapter4_003_001_example2()
{
	
	cout << "***** Before *****" << endl;

	// 코드에서 전혀 드러나지 않는 이름 없는 임시 객체가 생성된 후 소멸한다.
	TestFunc(10);

	cout << "***** After *****" << endl;

}
