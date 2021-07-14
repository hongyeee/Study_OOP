#pragma once
class Chapter3_004_003
{
public:
	Chapter3_004_003(int Param);
	~Chapter3_004_003();
	
	// 상수형 메서드로 선언
	int GetData() const;

	void SetData(int Param);

private:
	int Data = 0;
};

