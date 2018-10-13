#include <stdio.h>

int main() {
	
	int counter = 1, result = 1, num;
	
	printf("Enter factorial number:\t");
	scanf("%d", &num);
	
	while (counter <= num) {
		
		result *= counter;
		counter++;
	}
	
	printf("%d! = %d", num, result);

	return 0;
}
