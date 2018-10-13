// This program calculates the sum of digits of the number entered. The number may be your phone number, student number, driver's license ID, your date of birth or any number you can imagine.
#include <stdio.h>
#include <math.h>

int main() { 

	int sum = 0, digit, digitNo = 1, noOrder = 1, counter1 = 1;
	
	printf("Welcome to the SumFinder. The program will compute the sum of the\ndigits of number entered by user.\n\nNow there are some special quantities of digits in numbers which are;\n\n");		// Intro Sequence
	printf("11:\tStudent ID\n10:\tPhone Number\n8:\tDate of Birth (Example: 11051998)\n5:\tDriver's License Number\nElse:\tAny Number\n\n");															// Intro Sequence
	
	while (digitNo != 0)  {		// The loop starts here.
		
		printf("Enter the quantity of digits in your number, press '0' to terminate:\t");
		scanf("%d", &digitNo);
		printf("\n");
		
		// Special conditions' whiles are nested in if and else if.
		
		if (digitNo == 11) {
			
			while (counter1 <= 11) {
				
				printf("Enter the %d. digit of your student ID:  ", noOrder++);
				scanf("%d", &digit);
				sum += digit;
				counter1++;
			}
			
			printf("\nSum of the digits of your student ID: %d\n\n", sum);
			sum = 0, noOrder = 1, counter1 = 1;		// These lines are added to reset the variables after every calculation. I added them after a few tests.
		}
			
		else if (digitNo == 10) {
			
			while (counter1 <= 10) {
				
				printf("Enter the %d. digit of your phone number:  ", noOrder++);
				scanf("%d", &digit);
				sum += digit;
				counter1++;
			}
			
			printf("\nSum of the digits of your phone number: %d\n\n", sum);
			sum = 0, noOrder = 1, counter1 = 1;
		}
		
		else if (digitNo == 8) {
			
			while (counter1 <= 8) {
				
				printf("Enter the %d. digit of your date of birth:  ", noOrder++);
				scanf("%d", &digit);
				sum += digit;
				counter1++;
			}
			
			printf("\nSum of the digits of your date of birth: %d\n\n", sum);
			sum = 0, noOrder = 1, counter1 = 1;
		}
		
		else if (digitNo == 5) {
			
			while (counter1 <= 5) {
				
				printf("Enter the %d. digit of your driver's license number:  ", noOrder++);
				scanf("%d", &digit);
				sum += digit;
				counter1++;
			}
			
			printf("\nSum of the digits of your driver's license number: %d\n\n", sum);
			sum = 0, noOrder = 1, counter1 = 1;
		}
		
		// Last one meant to be else but after a few tests, when program is terminated, compiler also reads "Sum of the digits of your number: 0".
		// So I made a special condition for that too.
		
		else if (digitNo != 11 && digitNo != 10 && digitNo != 8 && digitNo != 5 && digitNo != 0) {
			
			while (counter1 <= digitNo) {
				
				printf("Enter the %d. digit of your number:  ", noOrder++);
				scanf("%d", &digit);
				sum += digit;
				counter1++;
			}
			
			printf("\nSum of the digits of your number: %d\n\n", sum);
			sum = 0, noOrder = 1, counter1 = 1;
		}
	}
	
	printf("Thanks for running!");		// Outro Sequence
	
	return 0;
}
