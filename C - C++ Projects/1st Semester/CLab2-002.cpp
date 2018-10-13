#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	float x, y, function;
	
	printf("This program computes this function.\n f(x,y) = x^2*y + sqrt(2*x*y) + y + 1\n\n");
	printf("Please enter x value:\t");
	scanf("%f", &x);
	printf("\n");
	printf("Please enter y value:\t");
	scanf("%f", &y);
	
	function = pow(x,2)*y + sqrt(2*x*y) + y + 1;
	printf("\nFunction is equal to %.3f for the entered values.", function);
	
	return 0;
}
