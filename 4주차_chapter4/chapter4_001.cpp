#include "chapter4_001.h"
#include <iostream>
using namespace std;


chapter4_001::chapter4_001()
{ cout << "chapter4_001" << endl; }

// ���� ������ ���� �� ����
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
	// ����Ʈ �����ڰ� ȣ��Ǵ� ���
	chapter4_001 a;
	a.SetData(10);

	// ���� �����ڰ� ȣ��Ǵ� ���
	chapter4_001 b(a);
	cout << b.GetData() << endl;

}