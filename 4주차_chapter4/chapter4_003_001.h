#pragma once
class chapter4_003_001
{
	int Data = 0;
	char* Name = nullptr;
public:
	chapter4_003_001(int Param, char* Name);
	~chapter4_003_001();
	chapter4_003_001(const chapter4_003_001& rhs);
	chapter4_003_001& operator=(const chapter4_003_001& rhs);
	int GetData() const;
	void SetData(int Param);
};
chapter4_003_001 TestFunc(int param);
void chapter4_003_001_example1();
void chapter4_003_001_example2();