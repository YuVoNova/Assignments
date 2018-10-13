#include <stdio.h>

int main() {
	
	int a, b, division, remainder;
	
	printf("Enter two integers to get their division and remainder:\n");
	scanf("%d%d", &a, &b);
	
	division = a / b;
	remainder = a % b;
	
	printf("Division: %d\n", division);
	printf("Remainder: %d\n", remainder);
	
	return 0;
}
