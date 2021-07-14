#include <iostream>
using namespace std;
#include "Chapter3_002.h"
#include "Chapter3_002_001_1.h"
#include "Chapter3_002_001_2.h"
#include "Chapter3_002_001_3.h"
#include "Chapter3_002_002.h"
#include "Chapter3_003_1.h"
#include "Chapter3_003_2.h"
#include "Chapter3_003_001.h"
#include "Chapter3_003_002.h"
#include "Chapter3_003_003_1.h"
#include "Chapter3_003_003_2.h"
#include "Chapter3_003_004.h"
#include "Chapter3_004_001.h"
#include "Chapter3_004_003.h"
#include "Chapter3_004_005.h"
#include "Chapter3_004_006.h"
#include "Chapter3_005.h"

// Chapter3_003_1 a; // 전역 변수로 선언한 클래스의 생성자가 main() 함수보다 먼저 호출

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
	Chapter3_003_2 A(1);
	cout << "Before b" << endl;
	Chapter3_003_2 B(2);
	cout << "End" << endl;


	cout << "Begin" << endl;
	// new 연산자를 이용해 동적으로 객체를 생성한다.
	Chapter3_003_001* Data = new Chapter3_003_001;
	cout << "Test" << endl;

	// delete 연산자를 이용해 객체를 삭제한다.
	delete Data;
	cout << "End" << endl;

	cout << "Begin" << endl;
	// 배열로 new 연산을 수행할 수 있다.
	Chapter3_003_001* nData = new Chapter3_003_001[3];

	// 배열로 생성한 것은 반드시 배열로 삭제한다.
	delete[] nData;
	// delete nData를 하면 첫 번째 요소 하나만 소멸하고 나머지는 그대로 메모리에 남는다.
	cout << "End" << endl;


	int a = 10;
	Chapter3_003_002 k(a);
	cout << k.GetData() << endl;

	// 참조 원본인 a의 값이 수정되었다.
	a = 20;
	cout << k.GetData() << endl;


	Chapter3_003_003_1 X(10);
	Chapter3_003_003_1 Y(3, 4);

	cout << X.GetData() << endl;
	cout << Y.GetData() << endl;


	// 매개 변수가 하나인 생서자만 호출한다.
	Chapter3_003_003_2 Begin(100);
	Begin.Print();

	Chapter3_003_003_2 End(50, 250);
	End.Print();


	Chapter3_003_004 test;
	cout << test.Data << endl;


	Chapter3_004_001 sample1(5), sample2(10);
	sample1.PrintData();
	sample2.PrintData();


	Chapter3_004_003 test1(10);
	cout << test1.GetData() << endl;


	Chapter3_004_005 test2(10);
	cout << test2.GetData() << endl;
	

	Chapter3_004_006 test3;
	
	// Chapter3_004_006::SetData(int) 메서드가 호출된다.
	test3.SetData(10);
	cout << test3.GetData() << endl;

	Chapter3_004_006 test4;

	// Chapter3_004_006::SetData(double) 메서드가 호출된다.
	test4.SetData(5.5);
	cout << test4.GetData() << endl;


	Chapter3_005 test5(5), test6(10);

	// 정적 멤버에 접근
	cout << test5.GetCount() << endl;
	test6.ResetCount();

	//정적 멤버에 접근. 인스턴스 없이도 접근 가능!
	cout << Chapter3_005::GetCount() << endl;

	return 0;
}