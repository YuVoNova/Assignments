#include <stdio.h>

void Draw(int a)
{
		for (int y = 1; y <= a; y++) 
		{
			for (int z = 1; z <= y; z++) 
			{
				printf("*");
			}
			
			printf("\n");
		}
		
		printf("\n");
}

void inputAndProcess()
{
	int x;

	while (x >= 0)
	{
		printf("Enter an integer from 1 up to 10 (negative integer to quit):\t");
		scanf("%d", &x);
		
		if (x > 10)
		{
			printf("\nYou've entered a wrong number, please try again.\n\n");
			x = 0;
			continue;
		}
		printf("\n");
		Draw(x);
	}
	
	printf("Thanks for running!");
}

int main()
{
	inputAndProcess();
	
	return 0;
}
