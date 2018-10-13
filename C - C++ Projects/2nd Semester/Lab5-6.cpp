#include <iostream>

using std::cout; using std::endl;

void hello(const char *str = "there")
{
	cout << "Hello " << str << endl;
}

int main()
{
	hello();
	hello("Ali");
	hello("Ahmet");
	
	return 0;
}
