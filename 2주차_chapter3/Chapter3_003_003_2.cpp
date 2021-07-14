#include "Chapter3_003_003_2.h"
#include <iostream>
using namespace std;

Chapter3_003_003_2::Chapter3_003_003_2(int x)
{
	cout << "Chapter3_003_003_2(int)" << endl;
	// x 값이 100이 넘는지 검사하고 넘으면 100으로 맞춘다.
	if (x > 100)
		x = 100;
	m_x = 100;
};

Chapter3_003_003_2::Chapter3_003_003_2(int x, int y)
// x 값을 검사하는 코드는 이미 존재하므로 재사용한다.
	: Chapter3_003_003_2(x)

{
	cout << "Chapter3_003_003_2(int, int)" << endl;
	// y 값이 200이 넘는지 검사하고 넘으면 200으로 맞춘다.
	if (y > 200)
		y = 200;
	m_y = 200;
};

void Chapter3_003_003_2::Print()
{
	cout << "X: " << m_x << endl;
	cout << "Y: " << m_y << endl;
}