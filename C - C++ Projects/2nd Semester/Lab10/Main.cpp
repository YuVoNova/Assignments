#include "Rectangle.h"

using namespace std;

int main(int argc, char** argv)
{
	Rectangle r1;
	Rectangle r2(6,10);
	Rectangle r3;
	
	r1.PrintArea();
	
	r2.PrintArea();
	
	r3.InputWidthHeight();
	r3.PrintArea();
	
	cout << endl << r3.instanceCount << " instances created.";
	
	return 0;
}
