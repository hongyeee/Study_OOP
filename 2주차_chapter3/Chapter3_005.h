#pragma once
class Chapter3_005
{
public:
	Chapter3_005(int Param);
	int GetData();
	void ResetCount();
	
	// ���� �޼��� ����
	static int GetCount();

private:
	int Data;

	//���� ��� ���� ����(���Ǵ� �ƴϴ�!)
	static int Count;

};

