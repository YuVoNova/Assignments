#include <stdio.h>

int main()
{
	int row, col, i, j;
	
	printf("Enter the row quantity of the matrices:\t"); scanf("%d", &row);
	printf("\nEnter the column quantity of the matrices:\t"); scanf("%d", &col);
	
	int a1[row][col], a2[row][col], sum[row][col];
	
	for (i=0; i<=row-1; i++)
	{
		for (j=0; j<=col-1; j++)
		{
			printf("\nEnter A%d%d element of 1st matrice:\t",i+1,j+1); scanf("%d", &a1[i][j]);
		}
	}
	
	for (i=0; i<=row-1; i++)
	{
		for (j=0; j<=col-1; j++)
		{
			printf("\nEnter A%d%d element of 2nd matrice:\t",i+1,j+1); scanf("%d", &a2[i][j]);
		}
	}
	
	for (i=0; i<=row-1; i++)
	{
		for (j=0; j<=col-1; j++)
		{
			sum[i][j] = a1[i][j] + a2[i][j];
		}
	}
	
	printf("\nSum of the matrices:\n");
	
	for (i=0; i<=row-1; i++)
	{
		for (j=0; j<=col-1; j++)
		{
			printf("   %d", sum[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
