#include <stdio.h>
#include <math.h>

int main() {
	
	int side, area;
	
	printf("Please enter the side of a square to calculate it's area:\n");
	scanf("%d", &side);
	
	area = pow(side,2);
	
	printf("The area of square with side length %d is %d.\n", side, area);
	
	return 0;
}
