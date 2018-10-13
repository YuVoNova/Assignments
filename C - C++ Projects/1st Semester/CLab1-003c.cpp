#include <stdio.h>

int main() {
	
	int a, b, division, remainder;
	
	printf("Enter two integers to get their division and remainder:\n");
	scanf("%d%d", &a, &b);
	
	division = a / b;
	remainder = a % b;
	
	printf("%d divided by %d, division is %d and remainder is %d.\n", a, b, division, remainder);
	
	return 0;
}
