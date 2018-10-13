#include <iostream>

using namespace std;

void test(int&);

int main()
{
	int i = 0;
	
	test(i);
	
	cout << i;
	
	return 0;
}

void test(int &i)
{
	i += 10;
}
