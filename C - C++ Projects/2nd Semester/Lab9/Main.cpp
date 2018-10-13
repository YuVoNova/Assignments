#include "Distance.h"

using namespace std;

int main(int argc, char** argv)
{
	int x, y;
	
	cout << "New point is created." << endl;
	cout << "Enter this point's X value: ";		cin >> x;
	cout << "Enter this point's Y value: ";		cin >> y;
	Point p1(x,y);
	
	cout << "New point is created." << endl;
	cout << "Enter this point's X value: ";		cin >> x;
	cout << "Enter this point's Y value: ";		cin >> y;
	Point p2(x,y);
	
	Distance d(p1,p2);
	
	d.CalculateDistance();
	
	return 0;
}
