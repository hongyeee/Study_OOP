#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
using namespace std;

#include "One.h"
#include "Two.h"
#include "Three.h"
#include "Four.h"
#include "Five.h"
#include "Six.h"
#include "Seven.h"
#include "Eight.h"
#include "Nine.h"
#include "Add.h"
#include "Sub.h"
#include "Mul.h"
#include "Div.h"
#include "Eleven.h"
#include "Twelve.h"




int main()
{
	One myTower; // 1미터
	One seoulTower(100); // 100미터
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
	cout << endl;



	cout << endl;
	Two birth(2014, 3, 20); // 2014년 3월 20일
	Two independenceDay("1945/8/13"); // 1945년 8월 15일
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
	cout << endl;



	cout << endl;
	Three kitae("kitae", 1, 5000); // id 1번, 잔액 5000원, 이름이 kitae인 계좌 생성
	kitae.deposit(50000); // 50000원 적금
	cout << kitae.getOwner() << "의 잔액은 " << kitae.inquiry() << endl;
	int money = kitae.withdraw(20000); // 20000원 출금
	cout << kitae.getOwner() << "의 잔액은 " << kitae.inquiry() << endl;
	cout << endl;



	cout << endl;
	Four coffeemachine(5, 10, 3); // 커피: 5, 물: 10, 설탕: 6으로 초기화
	coffeemachine.drinkEspresso(); // 커피 1, 물 1 소비
	coffeemachine.show();
	coffeemachine.drinkAmericano(); // 커피 1, 물 2 소비
	coffeemachine.show();
	coffeemachine.drinkSugarCoffee(); // 커피 1, 물 2, 설탕 1 소비
	coffeemachine.show();
	coffeemachine.fill(); // 커피: 10, 물: 10, 설탕: 10으로 채우기
	coffeemachine.show();
	cout << endl;



	cout << endl;
	Five random;
	cout << "__ 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개 __" << endl;
	for (int i = 0; i < 10; i++)
	{

		int n = random.next(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수
		cout << n << ' ';
	}
	cout << endl << endl << "__2에서 4까지의 랜덤 정수 10개 __" << endl;
	for (int i = 0; i < 10; i++)
	{

		int n = random.nextInRange(2, 4); // 2에서 4 사이의 랜덤함 정수
		cout << n << ' ';
	}
	cout << endl;
	cout << endl;



	cout << endl;
	Six random2;
	cout << "__ 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개 __" << endl;
	for (int i = 0; i < 10; i++)
	{

		int n = random2.even_next(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수
		cout << n << ' ';
	}
	cout << endl << endl << "__2에서 10까지의 랜덤 정수 10개 __" << endl;
	for (int i = 0; i < 10; i++)
	{

		int n = random2.even_nextInRange(2, 10); // 2에서 4 사이의 랜덤함 정수
		cout << n << ' ';
	}
	cout << endl;
	cout << endl;



	cout << endl;
	Seven random3;
	cout << "__ 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10개 __" << endl;
	for (int i = 0; i < 10; i++)
	{

		int n = random3.even_selectable(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수
		cout << n << ' ';
	}
	cout << endl << endl << "__2에서 9까지의 홀수 랜덤 정수 10개 __" << endl;
	for (int i = 0; i < 10; i++)
	{

		int n = random3.odd_selectable(2, 9); // 2에서 4 사이의 랜덤함 정수
		cout << n << ' ';
	}
	cout << endl;
	cout << endl;



	cout << endl;
	Eight integer1(30);
	cout << integer1.get() << ' '; // 30 출력
	integer1.set(50);
	cout << integer1.get() << ' '; // 50 출력

	Eight integer2("300");
	cout << integer2.get() << ' '; // 300 출력
	cout << integer2.isEven(); // Ture(정수로 1) 출력
	cout << endl;



	cout << endl;
	Nine oval1, oval2(3, 4);
	oval1.set(10, 20);
	oval1.show();
	cout << oval2.getWidth() << ", " << oval2.getHeight() << endl;
	cout << endl;
	return 0;
	cout << endl;



	cout << endl;
	Add a;
	Sub s;
	Mul m;
	Div d;
	int i = 0;

	while (i < 5)
	{

		int x, y;
		string cal;
		cout << "두 정수와 연산자를 입력하세요 >> " << endl;
		cin >> x >> y >> cal;
		i++;
		if (cal == "+")
		{
			a.setValue(x, y);
			cout << a.calculate() << endl;
		}
		else if (cal == "-")
		{
			s.setValue(x, y);
			cout << s.calculate() << endl;
		}
		else if (cal == "*")
		{
			m.setValue(x, y);
			cout << m.calculate() << endl;
		}
		else
		{
			d.setValue(x, y);
			cout << d.calculate() << endl;
		}

	}
	cout << endl;



	cout << endl;
	Eleven box(10, 2);
	box.draw(); // 박스를 그린다
	cout << endl;
	box.setSize(7, 4); // 박스의 크기를 변경한다
	box.setFill('^'); // 박스의 내부를 채울 문자를 '^'로 변경한다
	box.draw(); // 박스를 그린다
	cout << endl;




	cout << endl;
	Twelve ram;
	ram.write(100, 20);
	ram.write(104, 30);
	char res = ram.read(100) + ram.read(101);
	ram.write(102, res);
	cout << "102번지의 값 = " << (int)ram.read(102) << endl;
	cout << endl;
}
