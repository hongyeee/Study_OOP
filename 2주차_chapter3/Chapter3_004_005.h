#pragma once
class Chapter3_004_005
{
public:
	Chapter3_004_005(int Param);
	~Chapter3_004_005() {}
	
	// 상수형 메서드라도 mutable 멤버 변수에는 값을 쓸 수 있다.
	int GetData() const;
	void SetData(int Param);

private:
	mutable int Data = 0;
};

