// 1.3 �ν��Ͻ��� ����� �帧

// 1.3.2 std::cin 

#include <iostream>
#include <cstdio>
#include <string>
#include "chapter1_003_002.h"

void threetwo()
{
	int nAge;
	std::cout << "���̸� �Է��ϼ���" << std::endl;
	std::cin >> nAge;

	char szJob[32];
	std::cout << "������ �Է��ϼ���." << std::endl;
	std::cin >> szJob;

	std::string strName;
	std::cout << "�̸��� �Է��ϼ���." << std::endl;
	std::cin >> strName;

	std::cout << "����� �̸��� " << strName << "�̰�, "
		<< "���̴� " << nAge << "���̸�, "
		<< "������ " << szJob << "�Դϴ�." << std::endl;

}
