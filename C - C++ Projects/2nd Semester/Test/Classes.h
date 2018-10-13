#include <iostream>

using namespace std;

class A
{
	int c;
	
	private:
		int x;
		
	protected:
		int t;
		
	public:
		int y;
		
		void setX(int a)
		{
			x = a;
		}
		int getX()
		{
			return x;
		}
};

class B : public A
{
	private:
		int z;
		
	public:
		void Declare();
		void Show();
		C();
};
