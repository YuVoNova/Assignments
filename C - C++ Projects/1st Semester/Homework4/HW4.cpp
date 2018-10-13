#include <stdio.h>

#define size 10

float Average(int grades[size]);
int Lowest(int grades[size]);
int Highest(int grades[size]);
void Distribution(int grades[size]);

int main()
{
	int grades[size], i, j;
	
	printf("Please enter 10 grades:\n");
	
	for (i = 0; i <= size - 1; i++)
	{
		j = -1;
		
		while (j < 0 || j > 100)
		{
			printf("Student %d:\t", i+1);	scanf("%d", &grades[i]);
			j = grades[i];
		}
	}
	
	printf("\nClass Average:  %.2f\n", Average(grades));
	printf("Lowest Grade:  %d\n", Lowest(grades));
	printf("Highest Grade:  %d\n\nGrades Distribution:", Highest(grades));
	Distribution(grades);
	
	return 0;
}

float Average(int grades[size])
{
	int sum = 0, i;
	float avg;
	
	for (i = 0; i <= size - 1; i++)
	{
		sum += grades[i];
	}
	
	avg = (float)sum / size;
	return avg;
}

int Lowest(int grades[size])
{
	int i, temp = grades[0];
	
	for (i = 0; i <= size - 1; i++)
	{
		if (grades[i] < temp)
		{
			temp = grades[i];
		}
	}
	
	return temp;
}

int Highest(int grades[size])
{
	int i, temp = grades[0];
	
	for (i = 0; i <= size - 1; i++)
	{
		if (grades[i] > temp)
		{
			temp = grades[i];
		}
	}
	
	return temp;
}

void Distribution(int grades[size])
{
	int num = 0, i, j, k, tempLow, tempHigh;
	
	for (i = 0; i <= size - 1; i++)
	{
		tempLow = (num * 10);
		tempHigh = (num * 10) + 9;
		
		printf("\n%d0-%d9:  ", num, num);
		
		for (j = 0; j <= size - 1; j++)
		{
			if (tempLow <= grades[j] && grades[j] <= tempHigh)
			{
				printf("%c", '*');
			}
		}
		
		num++;
	}
	
	printf("\n  100:  ");
	
	for (j = 0; j <= size - 1; j++)
	{
		if (grades[j] == 100)
		{
			printf("%c", '*');
		}
	}
}
