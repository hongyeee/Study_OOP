#pragma once
class Chapter3_004_006
{
public:
	Chapter3_004_006();
	int GetData();
	void SetData(int nParam);

	// 매개변수가 double 자료형인 경우로 다중정의 했다.
	void SetData(double dParam);
	/*

	실수로 double 자료형 실인수가 넘어오는 경우를 차단한다.

	void Chapter3_004_006::SetData(double dParam) = delete;

	*/

private:
	int Data;
};

