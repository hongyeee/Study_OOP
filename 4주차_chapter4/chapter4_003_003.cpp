#include "chapter4_003_003.h"
#include <iostream>
using namespace std;

chapter4_003_003::chapter4_003_003()
{
	cout << "chapter4_003_003()" << endl;
}
chapter4_003_003::~chapter4_003_003()
{
	cout << "~chapter4_003_003()" << endl;
}
chapter4_003_003::chapter4_003_003(const chapter4_003_003& rhs)
{
	Data = rhs.Data;
	cout << "chapter4_003_003(const chapter4_003_003&)" << endl;
}
chapter4_003_003::chapter4_003_003(chapter4_003_003&& rhs) 
{
	Data = rhs.Data;
	cout << "chapter4_003_003(const chapter4_003_003&&)" << endl;
}
int chapter4_003_003::GetData() const
{
	return Data;
}
void chapter4_003_003::SetData(int Param)
{
	Data = Param;
}

chapter4_003_003 Test(int Param)
{
	cout << "** Test() : Begin *****" << endl;
	chapter4_003_003 a;
	a.SetData(Param);
	cout << "** Test() : End *****" << endl;

	return a;
}
void chapter4_003_003_example()
{
	chapter4_003_003 b;
	cout << "*Before ************" << endl;
	b = Test(20);
	cout << "*After ************" << endl;
	chapter4_003_003 c(b);
}