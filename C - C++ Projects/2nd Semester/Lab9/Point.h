#include <iostream>
#include <cmath>

class Point
{
	private:
		int x, y;
		
	public:
		Point(int = 0, int = 0);
		void PrintPoint();
		void CalculateMagnitude();
		
		inline int getX()			{return x;}
		inline int getY()			{return y;}
		
		inline void setX(int n)		{x = n;}
		inline void setY(int n)		{y = n;}
};
