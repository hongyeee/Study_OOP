// 3.4.5 상수형 메서드의 예외 사항

#include "Chapter3_004_005.h"


Chapter3_004_005::Chapter3_004_005(int Param)
	: Data(Param) {}


int Chapter3_004_005::GetData() const
{
	// 상수형 메서드라도 mutable 멤버 변수에는 값을 쓸 수 있다.
	Data = 20;
	return Data;
}

void Chapter3_004_005::SetData(int Param)
{
	Data = Param;
}
/*
void TestFunc(const int &nParam)
{
	// 상수형 참조였으나 일반 참조로 형변환 했다.
	int %nNewParam = const_Cast<int&>(nParam);

	// 따라서 l-value가 될 수 있다.
	nNewParam = 20;
}

int main()
{
	int Data = 10;

	//상수형 참조로 전달하지만 값이 변경된다.
	TestFunc(Data);

	// 변경된 값을 출력한다.
	cout << Data << endl;

	return 0;
}

-> 20

*/

// 형변환 연산자:  const_cast<새형식> (대상)
