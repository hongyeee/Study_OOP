// 3.4.3 상수형 메서드

#include "Chapter3_004_003.h"

Chapter3_004_003::Chapter3_004_003(int Param)
	: Data(Param) {}

Chapter3_004_003::~Chapter3_004_003() {}

int Chapter3_004_003::GetData() const
{
	// 멤버 변수의 값을 읽을 수는 있지만 쓸 수는 없다.
	return Data;	
}


/*
int Chapter3_004_003::GetData() const
{
	SetData(20);

	return Data;
} -> 불가능!!!
-> 오류 메시지: this포인터를 const Chapter3_004_003에서 Chapter3_004_003&로 변환할 수 없습니다.

int Chapter3_004_003::GetData() const
{
	Data = 20;

	return Data;
} -> 불가능!!!
-> 오류 메시지: Data는 const 개체를 통해 액세스되고 있으므로 수정할 수 없습니다.

*/


void Chapter3_004_003::SetData(int Param)
{
	Data = Param;
}

// 상수형 메서드는 절대로(혹은 문법적으로) 멤버 변수의 값을 쓸 수 없고, 상수형 메서드가 아닌 멤버는 호출할 수 없다.