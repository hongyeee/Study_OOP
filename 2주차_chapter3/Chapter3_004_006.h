#pragma once
class Chapter3_004_006
{
public:
	Chapter3_004_006();
	int GetData();
	void SetData(int nParam);

	// �Ű������� double �ڷ����� ���� �������� �ߴ�.
	void SetData(double dParam);
	/*

	�Ǽ��� double �ڷ��� ���μ��� �Ѿ���� ��츦 �����Ѵ�.

	void Chapter3_004_006::SetData(double dParam) = delete;

	*/

private:
	int Data;
};

