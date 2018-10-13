#include <stdio.h>

int main()
{
	int first, last, divider, flag, i, total = 0;
	
	printf("Enter two numbers:\n");
	scanf("%d%d", &first, &last);
	
	for (i=first; i<last; i++)
	{
		for (divider=2; divider<i; divider++)
		{
			if (i%divider==0)
			{
				flag = 0;
				break;
			}
			
			else
			{
				flag = 1;
			}
		}
		
		if (flag==1)
		{
			printf("%d\n", i);
			total += i;
		}
	}
	
	printf("\nTotal = %d", total);
	
	return 0;
}
