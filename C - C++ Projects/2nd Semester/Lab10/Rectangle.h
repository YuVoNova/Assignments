#include <iostream>

class Rectangle
{
	private:
		int width, height;
		
		int ComputeArea()	{return width * height;}
	
	public:
		static int instanceCount;
		
		Rectangle();
		Rectangle(int, int);
		
		void InputWidthHeight();
		void PrintArea();
		
		inline void setWidth(int w)			{if (w <= 0) width = 1; else width = w;}
		inline void setHeight(int h)		{if (h <= 0) height = 1; else height = h;}
		
		inline int getWidth()				{return width;}
		inline int getHeight()				{return height;}
};
