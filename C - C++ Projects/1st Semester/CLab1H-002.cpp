#include <stdio.h>

int main() {
	
	int x = 15, y = 7, result = x * y;
	
	scanf("%d", &y);
	printf("Result: %d\n", result);
	
	printf("Done!");
	
	return 0;	
} //  _ (Program asks an integer for "y" variable, but it doesn't change the result because variable "y" was declared before.)
  //  Result: 105
  //  Done!
