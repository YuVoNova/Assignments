#include <stdio.h>

int main() {
	
	printf("\nWelcome!!!\n\n\n");
	
	int x, y, add, sub, mul, div, mod;
	
	printf("Enter the first number:\n");
	scanf("%d", &x);
	printf("Enter the second number:\n");
	scanf("%d", &y);
	
	add = x+y, sub = x-y, mul = x*y, div = x/y, mod = x%y;
	
	printf("-> Here are the operations for two integer numbers\n\n");
	printf("-> Addition: %d + %d = %d\n", x, y, add);
	printf("-> Substraction: %d - %d = %d\n", x, y, sub);
	printf("-> Multiplication: %d * %d = %d\n", x, y, mul);
	printf("-> Division: %d / %d = %d\n", x, y, div);
	printf("-> Modular: %d (mod) %d = %d\n\n", x, y, mod);
	
	printf("-> Thank you for running !!!");
	
	return 0;
}
