#include "Nine.h"
#include <iostream>
using namespace std;

Nine::Nine(int width, int height)
{
	this->width = width;
	this->height = height;
}

Nine::~Nine()
{
	cout << "Oval ¼Ò¸ê : width = " << width << ", height = " << height << endl;
}

int Nine::getWidth()
{
	return width;
}

int Nine::getHeight()
{
	return height;
}

void Nine::set(int w, int h)
{
	this->width = w;
	this->height = h;
}

void Nine::show()
{
	cout << "width = " << width << ", height = " << height << endl;
}