#pragma once
class Chapter3_004_005
{
public:
	Chapter3_004_005(int Param);
	~Chapter3_004_005() {}
	
	// ����� �޼���� mutable ��� �������� ���� �� �� �ִ�.
	int GetData() const;
	void SetData(int Param);

private:
	mutable int Data = 0;
};

