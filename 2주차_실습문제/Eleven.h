#pragma once
class Eleven
{
	int width, height;
	char fill; // �ڽ��� ���θ� ä��� ����
public:
	Eleven(int w, int h);
	void setFill(char f);
	void setSize(int w, int h);
	void draw(); // �ڽ� �׸���
};

