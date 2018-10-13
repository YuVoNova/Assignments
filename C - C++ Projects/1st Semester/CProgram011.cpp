#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int lim, n1, n2, n3;
	scanf("%d", &lim);
	
	for (int i = 1; i <= 10; i++)
	{
		n1 = lim + (rand() % (lim + 100));
		n2 = lim + (rand() % (lim + 100));
		n3 = lim + (rand() % (lim + 100));
		printf("%d  %d  %d\n", n1, n2, n3);
	}
	
	return 0;
}
