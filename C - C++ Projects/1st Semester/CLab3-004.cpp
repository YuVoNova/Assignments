#include <stdio.h>

int main() {
	
	int x = 0, y = 1, result, lim;
	
	printf("Enter the limit number:\t");
	scanf("%d", &lim);
	
	while (result <= lim) {
		
		printf("%d ", result);
		result = x + y;
		y = x;
		x = result;
	}
	
	return 0;
}
