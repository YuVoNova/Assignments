#include <stdio.h>
#define PRINT(x) (x)

int main()
{
	char str[20];
	
	printf("Enter a string: "); scanf("%s", str);
	
	printf("The string is %s.", PRINT(str));
	
	return 0;
}
