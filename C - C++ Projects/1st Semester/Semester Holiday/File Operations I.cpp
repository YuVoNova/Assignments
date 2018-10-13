#include <stdio.h>

int main()
{
	FILE *f;
	f = fopen("Test (w+).txt", "w+");
	fprintf(f, "This is testing for fprintf...\n");
	fputs("This is testing for fputs...\n", f);
	fclose(f);
	f = fopen("Test (a+).txt", "a+");
	fprintf(f, "This is testing for fprintf...\n");
	fputs("This is testing for fputs...\n", f);
	fclose(f);
}
