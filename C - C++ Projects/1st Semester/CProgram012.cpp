#include <stdio.h>

int main()
{
	int random, i;
	
	for (i=0; i<=100; i++)
	{
		random = ((i * 7621) + 1) % 32768;		//32768 = rand() fonksiyonunun alabileceði maksimum pozitif deðer.
		printf("%d\n", random);
	}
	
	return 0;
}
