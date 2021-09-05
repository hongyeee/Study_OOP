#include "chapter4_001.h"
#include <iostream>
using namespace std;


chapter4_001::chapter4_001()
{ cout << "chapter4_001" << endl; }

// 복사 생성자 선언 및 정의
chapter4_001::chapter4_001(const chapter4_001& rhs)
{
	this->data = rhs.data;
	cout << "chapter4_001(const chapter4_001 &)" << endl;

}
int chapter4_001::GetData()const
{
	return data;
}
void chapter4_001::SetData(int Param)
{
	data = Param;
}
void chapter4_001_example()
{
	// 디폴트 생성자가 호출되는 경우
	chapter4_001 a;
	a.SetData(10);

	// 복사 생성자가 호출되는 경우
	chapter4_001 b(a);
	cout << b.GetData() << endl;

}