#include <iostream>
using namespace std;
#include "Chapter3_002.h"
#include "Chapter3_002_001_1.h"
#include "Chapter3_002_001_2.h"
#include "Chapter3_002_001_3.h"
#include "Chapter3_002_002.h"
#include "Chapter3_003_1.h"
#include "Chapter3_003_2.h"

Chapter3_003_1 a; // 전역 변수로 선언한 클래스의 생성자가 main() 함수보다 먼저 호출

int main()
{
	Chapter3_002 user = { 10, "철수" };
	user.Print();

	Chapter3_002_001_1 t; // 생성자 호출
	t.PrintData();

	cout << "_pmain() 함수 시작" << endl;
	Chapter3_002_001_2 p;
	p.PrintData();
	cout << "_pmain() 함수 끝" << endl;

	Chapter3_002_001_3 i;
	i.PrintData();

	Chapter3_002_002 data;
	data.SetData(10);
	cout << data.GetData() << endl;

	cout << "Begin" << endl;
	Chapter3_003_1 b;
	cout << "End" << endl;

	cout << "Begin" << endl;
	// new 연산자를 이용해 동적으로 객체를 생성한다.
	Chapter3_003_2* Data = new Chapter3_003_2;
	cout << "Test" << endl;

	// delete 연산자를 이용해 객체를 삭제한다.
	delete Data;
	cout << "End" << endl;

	cout << "Begin" << endl;
	// 배열로 new 연산을 수행할 수 있다.
	Chapter3_003_2* nData = new Chapter3_003_2[3];

	// 배열로 생성한 것은 반드시 배열로 삭제한다.
	delete[] nData;
	// delete nData를 하면 첫 번째 요소 하나만 소멸하고 나머지는 그대로 메모리에 남는다.
	cout << "End" << endl;


	return 0;
}