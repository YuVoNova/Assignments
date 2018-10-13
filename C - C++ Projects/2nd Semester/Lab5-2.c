#include <stdio.h>
#define MINIMUM(x, y) (x < y ? x : y)

int main()
{
	int num1, num2;
	
	printf("Enter first number: "); scanf("%d", &num1);
	printf("Enter second number: "); scanf("%d", &num2);
	
	printf("The smallest of %d and %d is %d.", num1, num2, MINIMUM(num1, num2));
	
	return 0;
}
