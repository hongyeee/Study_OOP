#include "chapter7_005.h"
class MyDataEx : public MyData
{
public:
	MyDataEx(int Param) : MyData(Param) {}
	MyDataEx operator+(const MyDataEx& rhs)
	{
		return MyDataEx(static_cast<int>(MyData::operator+(rhs)));
	}
};

class MyDataEx : public MyData
{
public:
	MyDataEx(int Param) : MyData(Param) {}
	using MyData::operator+;
	using MyData::operator=;
};