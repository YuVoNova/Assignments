#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
	int i, j, k = 0;
	char names[5][10] = {"arDa", "AySe", "Ahmet", "aniL", "ali"};
	char s[50] = "", temp[] = "";
	
	printf("Words are:\n\n");
	
	for (i=0; i<=4; i++)
	{
		printf("%s\n", names[i]);
	}
	
	for (i=0; i<=4; i++)
	{
		for (j=0; j<=9; j++)
		{
			names[i][j] = tolower(names[i][j]);
		}
	}
	
	printf("\nIn dictionary order:\n\n");
	
	for (j=1; j<=5; j++)
	{
		for (i=0; i<=3; i++)
		{
			if (strcmp(names[i], names[i+1]) > 0)
			{
				strcpy(temp, names[i]);
				strcpy(names[i], names[i+1]);
				strcpy(names[i+1], temp);
			}
		}
	}
	
	for (i=0; i<=4; i++)
	{
		printf("%s\n", names[i]);
	}
	
	for (i=0; i<=4; i++)
	{
		strcat(s, names[i]);
	}
	
	printf("\nConcenated words: %s", s);
	
	return 0;
}
