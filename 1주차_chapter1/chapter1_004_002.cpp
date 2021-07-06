// 1.4 ÀÚ·áÇü

// 1.4.2 auto 

#include <iostream>
#include "chapter1_004_002.h"

void fourtwo()
{
	int a = 10;
	int b(a);
	auto c(b);

	std::cout << a + b + c << std::endl;
}
