#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
#include "One.h"
#include "Two.h"
#include "Three.h"
#include "Four.h"
#include "Five.h"
#include "Six.h"

int main()
{
	One myTower; // 1미터
	One seoulTower(100); // 100미터
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;


	Two birth(2014, 3, 20); // 2014년 3월 20일
	Two independenceDay("1945/8/13"); // 1945년 8월 15일
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;


	Three kitae("kitae", 1, 5000); // id 1번, 잔액 5000원, 이름이 kitae인 계좌 생성
	kitae.deposit(50000); // 50000원 적금
	cout << kitae.getOwner() << "의 잔액은 " << kitae.inquiry() << endl;
	int money = kitae.withdraw(20000); // 20000원 출금
	cout << kitae.getOwner() << "의 잔액은 " << kitae.inquiry() << endl;


	Four coffeemachine(5, 10, 3); // 커피: 5, 물: 10, 설탕: 6으로 초기화
	coffeemachine.drinkEspresso(); // 커피 1, 물 1 소비
	coffeemachine.show();
	coffeemachine.drinkAmericano(); // 커피 1, 물 2 소비
	coffeemachine.show();
	coffeemachine.drinkSugarCoffee(); // 커피 1, 물 2, 설탕 1 소비
	coffeemachine.show();
	coffeemachine.fill(); // 커피: 10, 물: 10, 설탕: 10으로 채우기
	coffeemachine.show();


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

	return 0;
}