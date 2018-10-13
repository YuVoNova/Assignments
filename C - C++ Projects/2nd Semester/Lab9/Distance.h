#include "Point.h"

class Distance
{
	private:
		Point p1;
		Point p2;
		double distance;
		
	public:
		Distance(Point, Point);
		void CalculateDistance();
		
		inline Point getP1()			{return p1;}
		inline Point getP2()			{return p2;}
		inline double getDistance()		{return distance;}
		
		inline void setP1(Point p)		{p1 = p;}
		inline void setP2(Point p)		{p2 = p;}
};
