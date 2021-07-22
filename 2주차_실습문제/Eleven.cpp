#include "Eleven.h"
#include <iostream>
using namespace std;

Eleven::Eleven(int w, int h) { setSize(w, h); fill = '*'; }

void Eleven::setFill(char f) { fill = f; }

void Eleven::setSize(int w, int h) { width = w; height = h; }

void Eleven::draw()
{
	for (int n = 0; n < height; n++)
	{
		for (int m = 0; m < width; m++)
		{
			cout << endl;
		}
	}
}