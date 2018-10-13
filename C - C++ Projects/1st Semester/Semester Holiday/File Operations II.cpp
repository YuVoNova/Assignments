#include <stdio.h>

int main()
{
	FILE *f;
	char buff[255];
	
	f = fopen("Test (w+).txt", "r");
	fscanf(f, "%s", buff);
	printf("1: %s\n", buff);
	
	fgets(buff, 255, (FILE*)f);
	printf("2: %s\n", buff);
	
	fgets(buff, 255, (FILE*)f);
	printf("3: %s\n", buff);
	
	return 0;
}
