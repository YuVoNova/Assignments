#include <iostream>
using namespace std;

class SuperClass
{
	public:
		int x;
		int y;
		static int instanceCount;
		SuperClass()
		{
			instanceCount++;
			cout << "Super Class constructor" << endl;
		}
		
		void SetValues(int n1, int n2)
		{
			x = n1;
			y = n2;
		}
};

int SuperClass::instanceCount = 0;

class A : public SuperClass
{
	public:
		A()
		{
			cout << "Class A constructor" << endl;
		}
		
		int Result()
		{
			return x+y;
		}
};

class B : public SuperClass
{
	public:
		B()
		{
			cout << "Class B constructor" << endl;
		}
		
		int Result()
		{
			return x*y;
		}
};

int main()
{
	A aObj;
	aObj.SetValues(3, 5);
	
	B bObj;
	bObj.SetValues(6, 8);
	
	cout << "Results for A Object: " << aObj.Result() << endl << "Results for B Object: " << bObj.Result() << endl;
	
	SuperClass scObj;
	
	cout << "SuperClass constructed " << aObj.instanceCount << " times.";
	
	return 0;
}
