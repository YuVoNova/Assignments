#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateReport(int maxLevel, int playCount, int numWin, int ID)		//The function to make a report after win, lose or quit.
{
	printf("\n\n------------REPORT------------\n\n");
	printf(" The ID is:  %d\n The number of plays:  %d\n The number of wins:  %d\n The level is: %d\n\n", ID, playCount, numWin, maxLevel);
}

void adamAsmaca(int maxLevel, int playCount, int numWin, int ID)			//The function that plays the game.
{
	int num1, num2, num3, d1, d2, d3, d4, d5, remainder, guess;				//Variables for calculations and guesses from the user.
	int state1 = 0, state2 = 0, state3 = 0, state4 = 0, state5 = 0;			//Variables to make a progress in a level.
	int d1f = 0, d2f = 0, d3f = 0, d4f = 0, d5f = 0;						//Variables for the bonus output. :)
	
	for (int counter0 = 1; counter0 < 2; counter0++)						//The game is nested in this loop, so we can break the loop and finish the game when player loses.
	{
		printf("\n\n------------LEVEL 1------------\n");
		printf("***\n");
		
		srand(time(NULL));													//Generating a random number using <time.h> library.
		num1 = 100 + (rand() % 900);
		
		for (int counter1 = 1; counter1 <= 3; counter1++)					//The loop for the number of Level 1. This loop was made to get digits instead of a whole number.
		{
			remainder = num1 % 10;
			
			if (counter1 == 1)
				d3 = remainder;
				
			else if (counter1 == 2)
				d2 = remainder;
				
			else if (counter1 == 3)
				d1 = remainder;
				
			num1 /= 10;
		}
		
		for (int i = 1; i <= 7; i++)										//This loops job is getting guesses from the user and matching them with the generated number.
		{
			printf("\nGuess:\t");
			scanf("%d", &guess);
			
			if (guess < 0 || guess > 9)										//An if statement to warn user if he got out of boundaries.
			{
				printf("\nYou're out of boundary!");
				continue;
			}
			
			if (d1 == guess)
			{
				state1++;
				printf("%d", d1);
				d1f = 1;
			}
			else if (d1f == 1)
			{
				printf("%d", d1);
			}
			else
			printf("*");
			if (d2 == guess)
			{
				state2++;
				printf("%d", d2);
				d2f = 1;
			}
			else if (d2f == 1)
			{
				printf("%d", d2);
			}
			else
			printf("*");
			if (d3 == guess)
			{
				state3++;
				printf("%d", d3);
				d3f = 1;
			}
			else if (d3f == 1)
			{
				printf("%d", d3);
			}
			else
			printf("*");
			
			if (state1 > 0 && state2 > 0 && state3 > 0)						//An if statement to check if the user won or not.
			{
				printf("\nYou won! The generated number is %d%d%d\n", d1, d2, d3);
				break;
			}
		}
		
		if (state1 < 1 || state2 < 1 || state3 < 1)							//An if statement to check if the user lost or not.
		{
			printf("\nYou lost! The generated number was %d%d%d\n", d1, d2, d3);
			playCount++;
			generateReport(maxLevel, playCount, numWin, ID);				//Generating a report after lose.
			break;
		}
		
		maxLevel++;
		state1 = 0, state2 = 0, state3 = 0;									//Variables are getting their default values, so we can use them in the next levels too.
		d1f = 0, d2f = 0, d3f = 0;
		
		printf("\n\n------------LEVEL 2------------\n");
		printf("****\n");
		
		srand(time(NULL));
		num2 = 1000 + (rand() % 9000);
		
		for (int counter2 = 1; counter2 <= 4; counter2++)					//The loop for the number of Level 2. This loop was made to get digits instead of a whole number.
		{
			remainder = num2 % 10;
			
			if (counter2 == 1)
				d4 = remainder;
				
			else if (counter2 == 2)
				d3 = remainder;
				
			else if (counter2 == 3)
				d2 = remainder;
				
			else if (counter2 == 4)
				d1 = remainder;
				
			num2 /= 10;
		}
		
		for (int j = 1; j <= 6; j++)										//This loops job is getting guesses from the user and matching them with the generated number.
		{
			printf("\nGuess:\t");
			scanf("%d", &guess);
			
			if (guess < 0 || guess > 9)
			{
				printf("\nYou're out of boundary!");
				continue;
			}
			
			if (d1 == guess)
			{
				state1++;
				printf("%d", d1);
				d1f = 1;
			}
			else if (d1f == 1)
			{
				printf("%d", d1);
			}
			else
			printf("*");
			if (d2 == guess)
			{
				state2++;
				printf("%d", d2);
				d2f = 1;
			}
			else if (d2f == 1)
			{
				printf("%d", d2);
			}
			else
			printf("*");
			if (d3 == guess)
			{
				state3++;
				printf("%d", d3);
				d3f = 1;
			}
			else if (d3f == 1)
			{
				printf("%d", d3);
			}
			else
			printf("*");
			if (d4 == guess)
			{
				state4++;
				printf("%d", d4);
				d4f = 1;
			}
			else if (d4f == 1)
			{
				printf("%d", d4);
			}
			else
			printf("*");
			
			if (state1 > 0 && state2 > 0 && state3 > 0 && state4 > 0)
			{
				printf("\nYou won! The generated number is %d%d%d%d\n", d1, d2, d3, d4);
				break;
			}
		}
		
		if (state1 < 1 || state2 < 1 || state3 < 1 || state4 < 1)
		{
			printf("\nYou lost! The generated number was %d%d%d%d\n", d1, d2, d3, d4);
			playCount++;
			generateReport(maxLevel, playCount, numWin, ID);
			break;
		}
		
		maxLevel++;
		state1 = 0, state2 = 0, state3 = 0, state4 = 0;
		d1f = 0, d2f = 0, d3f = 0, d4f = 0;
		
		printf("\n\n------------LEVEL 3------------\n");
		printf("*****\n");
		
		srand(time(NULL));
		num3 = 10000 + (rand() % 90000);
		
		for (int counter3 = 1; counter3 <= 5; counter3++)					//The loop for the number of Level 3. This loop was made to get digits instead of a whole number.
		{
			remainder = num3 % 10;
			
			if (counter3 == 1)
				d5 = remainder;
				
			else if (counter3 == 2)
				d4 = remainder;
				
			else if (counter3 == 3)
				d3 = remainder;
				
			else if (counter3 == 4)
				d2 = remainder;
				
			else if (counter3 == 5)
				d1 = remainder;
			
			num3 /= 10;
		}
		
		for (int k = 1; k <= 5; k++)										//This loops job is getting guesses from the user and matching them with the generated number.
		{
			printf("\nGuess:\t");
			scanf("%d", &guess);
			
			if (guess < 0 || guess > 9)
			{
				printf("\nYou're out of boundary!");
				continue;
			}
			
			if (d1 == guess)
			{
				state1++;
				printf("%d", d1);
				d1f = 1;
			}
			else if (d1f == 1)
			{
				printf("%d", d1);
			}
			else
			printf("*");
			if (d2 == guess)
			{
				state2++;
				printf("%d", d2);
				d2f = 1;
			}
			else if (d2f == 1)
			{
				printf("%d", d2);
			}
			else
			printf("*");
			if (d3 == guess)
			{
				state3++;
				printf("%d", d3);
				d3f = 1;
			}
			else if (d3f == 1)
			{
				printf("%d", d3);
			}
			else
			printf("*");
			if (d4 == guess)
			{
				state4++;
				printf("%d", d4);
				d4f = 1;
			}
			else if (d4f == 1)
			{
				printf("%d", d4);
			}
			else
			printf("*");
			if (d5 == guess)
			{
				state5++;
				printf("%d", d5);
				d5f = 1;
			}
			else if (d5f == 1)
			{
				printf("%d", d5);
			}
			else
			printf("*");
			
			if (state1 > 0 && state2 > 0 && state3 > 0 && state4 > 0 && state5 > 0)			//An if statement to check if the user won the game or not. If so, it generates a report.
			{
				printf("\nYou won! The generated number is %d%d%d%d%d\n", d1, d2, d3, d4, d5);
				numWin++;	
				maxLevel++;
				playCount++;
				generateReport(maxLevel, playCount, numWin, ID);
				break;
			}
		}
		
		if (state1 < 1 || state2 < 1 || state3 < 1 || state4 < 1 || state5 < 1)
		{
			printf("\nYou lost! The generated number was %d%d%d%d%d\n", d1, d2, d3, d4, d5);
			playCount++;
			generateReport(maxLevel, playCount, numWin, ID);
			break;
		}
	}
}

int main()																					//Our main function to ask an ID from the user and call the other functions.
{
	int maxLevel = 1, playCount = 0, numWin = 0, ID = 0;									//Our base variables for report.
	int select = 1;																			//A variable to make a selection about continue or terminate.
	
	printf("Welcome to the Hang Man!\n\nPlease enter your ID:\t");
	scanf("%d", &ID);
	
	while (select == 1)																		//This loop was made to be able to play the game again if the user wants so.
	{
		printf("\n\n1. Start Game\n2. End Game\nEnter your choice:\t");
		scanf("%d", &select);
		
		switch (select)
		{
			case 1:																			//This case calls the adamAsmaca function and runs the game.
				adamAsmaca(maxLevel, playCount, numWin, ID);
				break;
			case 2:																			//This case prints a report by calling generateReport function and terminates the game.
				generateReport(maxLevel, playCount, numWin, ID);
				break;
			default:																		//This case was made to make sure user entered 1 or 2.
				printf("\n\nYou've entered a wrong number, please try again.\n");
				select = 1;
				break;
		}
	}
	
	printf("\nThanks for playing!");
	
	return 0;
}
