#include <stdio.h>

int main()
{
	int random, i;
	
	for (i=0; i<=100; i++)
	{
		random = ((i * 7621) + 1) % 32768;		//32768 = rand() fonksiyonunun alabilece�i maksimum pozitif de�er.
		printf("%d\n", random);
	}
	
	return 0;
}
