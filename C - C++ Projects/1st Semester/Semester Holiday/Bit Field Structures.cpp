#include <stdio.h>

struct
{
	unsigned int height;
	unsigned int weight;
}status1;

struct
{
	unsigned int height : 1;
	unsigned int weight : 1;
}status2;

int main()
{
	printf("Memory occupied by status1 : %d\n",sizeof(status1));
	printf("Memory occupied by status2 : %d\n",sizeof(status2));
	
	return 0;
}
