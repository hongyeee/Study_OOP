#include "fourteen.h"
#include <iostream>
#include <string>
using namespace std;

void fourteen()
{
	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원 입니다." << endl;
	int num, total = 0;
	string coffee;

	while (true)
	{
		cout << "주문 >> " << endl;
		cin >> coffee >> num;
		if (coffee == "에스프레소")
		{
			total += 2000 * num;
			cout << 2000 * num << "원 입니다. 맛있게 드세요" << endl;
			if (20000 <= total)
			{
				cout << "오늘 " << total << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~" << endl;
				break;
			}
				

		}
		else if (coffee == "아메리카노")
		{
			total += 2300 * num;
			cout << 2300 * num << "원 입니다. 맛있게 드세요" << endl;
			if (20000 <= total)
			{
				cout << "오늘 " << total << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~" << endl;
				break;
			}

		}
		else
		{
			total += 2500 * num;
			cout << 2500 * num << "원 입니다. 맛있게 드세요" << endl;
			if (20000 <= total)
			{
				cout << "오늘 " << total << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~" << endl;
				break;
			}

		}
	}


}