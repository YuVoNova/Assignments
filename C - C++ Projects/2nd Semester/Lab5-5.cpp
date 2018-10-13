#include <iostream>

using std::cout; using std::cin;

inline float rectangleArea(float x, float y)
{
	return x * y;
}

int main()
{
	float num1, num2;
	
	cout << "Enter first side: "; cin >> num1;
	cout << "Enter second side: "; cin >> num2;
	cout << "Area of the rectangle with sides of " << num1 << " and " << num2 << " is " << rectangleArea(num1, num2);
	
	return 0;
}
