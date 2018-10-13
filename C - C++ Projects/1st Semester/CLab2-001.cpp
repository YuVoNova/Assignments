#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	float weight, height, BMI;
	
	printf("This program computes your BMI (Body-Mass Index).\n\nPlease enter your weight in kg:\t");
	scanf("%f", &weight);

	printf("Please enter your height in m:\t");
	scanf("%f", &height);
	printf("\n");

	BMI = weight / pow(height, 2);

	printf("Your index is %f.\n\n", BMI);

	if (BMI <= 20) {
		printf("You are weak.\n\n");
	}

	else if (20 < BMI && BMI <= 30) {
		printf("You are normal.\n\n");
	}

	else if (30 < BMI && BMI <= 40) {
		printf("You are fat.\n\n");
	}

	else if (40 < BMI) {
		printf("You are risky.\n\n");
	}

	printf("Thanks for running!");

	return 0;
}
