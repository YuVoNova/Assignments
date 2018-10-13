#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	
	for (i = 1; i <= 30; i++)
	{
		printf("%7d", 1 + (rand() % 100));
		
		if (i % 5 == 0)
		{
			printf("\n");
		}
	}
	
	return 1;
}
