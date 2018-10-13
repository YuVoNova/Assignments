#include "Classes.h"

using namespace std;

void B::Declare()
{
	setX(5);
	t = 6;
	y = 4;
	z = 3;
	c = 100;
}

void B::Show()
{
	cout << t << "  " << getX() << "  " << y << "  " << z << "  " << c;
}

B::C()
{
	cout << "Constructed" << endl;
}
