#include <stdio.h>
#include <math.h>

#define PI 3.14

int main() {
	
	int r;
	float vol;
	
	printf("Enter the radius of sphere to find it's volume:\t");
	scanf("%d", &r);
	printf("\n");
	
	vol = 4 * pow(r,3) * PI / 3;
	
	printf("The volume of a sphere with a radius of %d is %f.\n\n", r, vol);
	
	return 0;
}
