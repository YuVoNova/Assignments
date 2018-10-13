#include <stdio.h>

main() {
	
	int pow, lim, counter = 1;
	
	printf("Enter the limit number:\t");
	scanf("%d", &lim);
	printf("Enter the power:\t");
	scanf("%d", &pow);
	
	while (counter <= lim) {
		
		printf("%d ", counter);
		counter *= pow;
	}
	
	printf("\nEnd of the program.\n");
	
	return 81;
}
