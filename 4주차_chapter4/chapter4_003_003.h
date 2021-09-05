#pragma once
class chapter4_003_003
{
	int Data = 0;
public:
	chapter4_003_003();
	~chapter4_003_003();
	chapter4_003_003(const chapter4_003_003& rhs);
	chapter4_003_003(chapter4_003_003&& rhs);
	chapter4_003_003& operator=(const chapter4_003_003&) = default;
	int GetData() const;
	void SetData(int Param);

};
chapter4_003_003 Test(int Param);
void chapter4_003_003_example();