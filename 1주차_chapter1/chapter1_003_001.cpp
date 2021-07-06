// 1.3.1 std::cout //

#include <iostream>
#include <string>
#include "chapter1_003_001.h"

void threeone_one()
{
	std::cout << 10 << std::endl;
	std::cout << 10U << std::endl;
	std::cout << 10.5F << std::endl;
	std::cout << 10.5 << std::endl;
	std::cout << 3 + 5 << std::endl;

}


void threeone_two()
{
	std::string strData = "Test string";
	std::cout << "Sample string" << std::endl;
	std::cout << strData << std::endl;

	strData = "New string";
	std::cout << strData << std::endl;

	std::cout << "저는 " << 20 << "살 " << "입니다." << std::endl;
}