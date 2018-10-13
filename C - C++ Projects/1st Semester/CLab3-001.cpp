#include <stdio.h>

int main() {
	
	int lim, counter = 0;
	
	printf("Enter the number limit:\t");
	scanf("%d", &lim);
	
	while (++counter <= lim) {
		printf("%d\n", counter);
	}
	
	printf("\nEnd of the program.");
	
	return 1998;
}
