#include <stdio.h>
#include <math.h>

main() {

	int num = 1, mod;
	
	printf("This program finds out if your number is even or odd.\nEnter 0 to terminate program.\n\n");
	
	while (num != 0) {
	
		printf("Enter an integer number to learn if it's even or odd (Enter 0 to terminate):\t");
		scanf("%d", &num);
		printf("\n");

		mod = num % 2;

		if (mod == 0) {
			printf("Your number is even.\n\n");
		}
		else if (mod != 0) {
			printf("Your number is odd.\n\n");
		}
	}
	
	printf("Thanks for running!");

	return 0;
}
