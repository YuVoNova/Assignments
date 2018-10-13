#include <stdio.h>

int square(int y)
{
	return y * y;	
}

int main()
{
	int x;
	
	printf("Enter an integer to learn it's square:\t");
	scanf("%d", &x);
	
	printf("\nSquare of %d is %d.", x, square(x));
	
	return 0;
}
