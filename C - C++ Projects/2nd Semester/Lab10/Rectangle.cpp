#include "Rectangle.h"

using namespace std;

int Rectangle::instanceCount = 0;

Rectangle::Rectangle()
{
	width = 1;
	height = 1;
	instanceCount++;
}

Rectangle::Rectangle(int w, int h)
{
	width = w;
	height = h;
	instanceCount++;
}

void Rectangle::InputWidthHeight()
{
	int w, h;
	cout << endl << "Enter width: ";	cin >> w;	setWidth(w);
	cout << endl << "Enter height: ";	cin >> h;	setHeight(h);
}

void Rectangle::PrintArea()
{
	cout << endl << "Area: " << Rectangle::ComputeArea() << endl;
}
