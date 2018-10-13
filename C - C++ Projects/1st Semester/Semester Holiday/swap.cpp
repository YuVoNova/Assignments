#include <stdio.h>

int main()
{
	int x, y;
	
	printf("Enter two integers :\n");
	scanf("%d %d",&x,&y);
	
	printf("Before x = %d, y = %d",x,y);
	
	{
		int x = y;
		printf("\nAfter x = %d,",x);
	}
	y = x;
	printf(" y = %d",y);
	
	return 0;
}
