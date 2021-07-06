// 1.3.2 std::cin //

#include <iostream>
#include <cstdio>
#include <string>
#include "chapter1_003_002.h"

void threetwo()
{
	int nAge;
	std::cout << "나이를 입력하세요" << std::endl;
	std::cin >> nAge;

	char szJob[32];
	std::cout << "직업을 입력하세요." << std::endl;
	std::cin >> szJob;

	std::string strName;
	std::cout << "이름을 입력하세요." << std::endl;
	std::cin >> strName;

	std::cout << "당신의 이름은 " << strName << "이고, "
		<< "나이는 " << nAge << "살이며, "
		<< "직업은 " << szJob << "입니다." << std::endl;

}
