#include "Chapter3_003_003_2.h"
#include <iostream>
using namespace std;

Chapter3_003_003_2::Chapter3_003_003_2(int x)
{
	cout << "Chapter3_003_003_2(int)" << endl;
	// x ���� 100�� �Ѵ��� �˻��ϰ� ������ 100���� �����.
	if (x > 100)
		x = 100;
	m_x = 100;
};

Chapter3_003_003_2::Chapter3_003_003_2(int x, int y)
// x ���� �˻��ϴ� �ڵ�� �̹� �����ϹǷ� �����Ѵ�.
	: Chapter3_003_003_2(x)

{
	cout << "Chapter3_003_003_2(int, int)" << endl;
	// y ���� 200�� �Ѵ��� �˻��ϰ� ������ 200���� �����.
	if (y > 200)
		y = 200;
	m_y = 200;
};

void Chapter3_003_003_2::Print()
{
	cout << "X: " << m_x << endl;
	cout << "Y: " << m_y << endl;
}