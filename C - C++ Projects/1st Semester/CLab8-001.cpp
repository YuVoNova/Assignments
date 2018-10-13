#include <stdio.h>

int main()
{
	int elem, i, j;
	
	printf("Enter element number:\t"); scanf("%d", &elem);
	
	float array[elem], temp;
	
	for (i=0; i<=elem-1; i++)
	{
		printf("\nEnter %d. element:\t", i+1); scanf("%f", &array[i]);
	}
	
	for (i=1; i<=elem; i++)
	{
		for (j=0; j<=elem-2; j++)
		{
			if (array[j]>array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	
	printf("Largest:  %.2f\nSecond Largest:  %.2f", array[elem-1], array[elem-2]);
	
	return 0;
}
