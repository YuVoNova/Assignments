#include "Distance.h"

using namespace std;

Distance::Distance(Point np1, Point np2)
{
	setP1(np1);
	setP2(np2);
	Distance::distance = 0;
}

void Distance::CalculateDistance()
{
	int l1, l2;
	
	l1 = getP1().getX() - getP2().getX();
	l2 = getP1().getY() - getP2().getY();
	
	Distance::distance = sqrt(pow(l1,2) + pow(l2,2));
	
	getP1().CalculateMagnitude();
	getP2().CalculateMagnitude();
	
	cout << "The distance between ";
	getP1().PrintPoint();
	cout << " and ";
	getP2().PrintPoint();
	cout << " is " << getDistance();
}
