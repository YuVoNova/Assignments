// This program will calculate your weight on any planet on our solar system.
// I/O Description, Algorithm Development, Hand Example and Flowchart will be attached to the mail as well.

#include <stdio.h>

#define gMercury 3.7
#define gVenus 8.9
#define gEarth 9.8
#define gMars 3.7
#define gJupiter 24.8
#define gSaturn 10.4
#define gUranus 8.7
#define gNeptune 11.2
#define gPluto 0.6

// These are the constants of gravities on planets.

int main() {
	
	float planet, weight1, mass, weight2;	// Variables are float cause of constants' precisions.
	
	printf("Welcome to the Interplanetary Weight Calculator!\n"); 											// Intro Sequence
	printf("This program will calculate your weight on any planet\nyou want on our solar system.\n\n");		// Intro Sequence
	printf("Please enter your weight on Earth: ");															// Asking user for a weight on Earth.
	scanf("%f", &weight1);
	printf("\n");	// This line has been added after first test to make the program more readable.
	
		mass = weight1 / gEarth;	// Computing mass to make the calculations easier.
	
		printf("Your mass is %.1f kilogram.\n\n", mass);	// An extra info for user.
	
	printf("Now please choose the planet you wish to learn how much you would weigh there!\n\n");		// A selection segment for planets.
	printf("Press '1' for Mercury\n");
	printf("Press '2' for Venus\n");
	printf("Press '3' for Mars\n");
	printf("Press '4' for Jupiter\n");
	printf("Press '5' for Saturn\n");
	printf("Press '6' for Uranus\n");
	printf("Press '7' for Neptune\n");
	printf("Press '8' for Pluto\n");
	scanf("%f", &planet);
	printf("\n");	// This line has been added after first test to make the program more readable.
	
// I don't know the "case" formula very well yet, so I used "if" function to be able to make a selection sequence.
	
		if (planet == 1) {
			
			weight2 = mass * gMercury;
			printf("Your weight on Mercury is %.1f kilogram per second square.\n", weight2);		
		
		}
	
		if (planet == 2) {
			
			weight2 = mass * gVenus;
			printf("Your weight on Venus is %.1f kilogram per second square.\n", weight2);
			
		}
	
		if (planet == 3) {
			
			weight2 = mass * gMars;
			printf("Your weight on Mars is %.1f kilogram per second square.\n", weight2);
			
		}
	
		if (planet == 4) {
			
			weight2 = mass * gJupiter;
			printf("Your weight on Jupiter is %.1f kilogram per second square.\n", weight2);
			
		}
	
		if (planet == 5) {
			
			weight2 = mass * gSaturn;
			printf("Your weight on Saturn is %.1f kilogram per second square.\n", weight2);
			
		}
	
		if (planet == 6) {
			
			weight2 = mass * gUranus;
			printf("Your weight on Uranus is %.1f kilogram per second square.\n", weight2);
			
		}
	
		if (planet == 7) {
			
			weight2 = mass * gNeptune;
			printf("Your weight on Neptune is %.1f kilogram per second square.\n", weight2);
			
		}
	
		if (planet == 8) {
			
			weight2 = mass * gPluto;
			printf("Your weight on Pluto is %.1f kilogram per second square.\n", weight2);
			
		}
		
	printf("\nThanks for running Interplanetary Weight Calculator!");		// Outro Sequence
	
	return 0;	// Terminating Program
	
}
