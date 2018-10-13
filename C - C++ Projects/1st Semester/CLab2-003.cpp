#include <stdio.h>

int main() {
	
	int num1 = 18, num2 = 24, x;
	
	printf("Number 1 -- Value = %d,\tAddress = %d\n", num1, &num1);
	printf("Number 2 -- Value = %d,\tAddress = %d\n\n", num2, &num2);
	
	x = num1;
	num1 = num2;
	num2 = x;
	
	printf("Number 1 -- Value = %d,\tAddress = %d\n", num1, &num1);
	printf("Number 2 -- Value = %d,\tAddress = %d\n\n", num2, &num2);
	
	return 0;
}
