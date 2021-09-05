#pragma once
#include <iostream>
using namespace std;


class chapter4_001
{
	int data = 0;

public:
	chapter4_001();
	chapter4_001(const chapter4_001& rhs);
	int GetData()const;
	void SetData(int Param);
};
void chapter4_001_example();
