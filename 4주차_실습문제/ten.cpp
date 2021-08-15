#include "ten.h"
#include <iostream>
#include <string>
using namespace std;
Buffer& append(Buffer& buf, string str)
{
	buf.add(str);
	return buf;
}

void ten_sol()
{
	Buffer buf("Hello");
	Buffer& temp = append(buf, "Guys");
	temp.print();
	buf.print();

}