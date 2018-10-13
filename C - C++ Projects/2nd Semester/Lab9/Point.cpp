#include "Point.h"

using namespace std;

Point::Point(int n1, int n2)
{
	setX(n1);
	setY(n2);
}

void Point::PrintPoint()
{
	cout << "Point (" << getX() << "," << getY() << ")";
}

void Point::CalculateMagnitude()
{
	double mag;
	mag = sqrt(pow(x,2) + pow(y,2));
	
	Point::PrintPoint();	cout << endl;
	cout << "Magnitude of this point: " << mag << endl;
}
