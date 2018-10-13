#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int TooHigh(int num, int guess)
{
	int temp;
	temp = 99 - guess;
	guess = 1 + (rand() % temp);
	return guess;
}

int TooLow(int num, int guess)
{
	int temp;
	temp = 99 - guess;
	guess = guess + (rand() % temp);
	return guess;
}

int main()
{
	int guess, num, start, counter = 0;
	
	srand(time(NULL));
	num = 1 + (rand() + 99);
	guess = 1 + (rand() + 99);
	
	scanf("%d", &start);
	
	while (guess != num)
	{
		counter++;
		
		if (guess == num)
		{
			break;
		}
		
		else if (guess > num)
		{
			guess = TooHigh(num, guess);
		}
		
		else if (guess < num)
		{
			guess = TooLow(num, guess);
		}
	}
	
	printf("The program found the generated number %d in %d tries.\n The last guess was %d.", num, counter, guess);
	
	return 1;
}
