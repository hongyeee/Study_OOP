// 3.3 생성자와 소멸자

#include "Chapter3_003_1.h"
#include <iostream>
using namespace std;

Chapter3_003_1::Chapter3_003_1()
{
	cout << "Chapter3_003_1::Chapter3_003_1" << endl;
}

Chapter3_003_1::~Chapter3_003_1()
{
	cout << "Chapter3_003_1::~Chapter3_003_1" << endl;
}

/*

main() 함수가 호출되기 전에 생성자가 호출될 수 있다.
생성자는 다중 정의 할 수 있다.
소명자는 다중 정의 할 수 없다.
main() 함수가 끝난 후에 소멸자가 호출될 수 있다.
생성자와 소멸자는 생략할 수 있으나 생략할 경우 컴파일러가 만들어 넣는다.

*/