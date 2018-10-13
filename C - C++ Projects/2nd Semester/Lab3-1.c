#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

struct StackNode
{
	int data;
	struct StackNode *nextPtr;
};

typedef struct StackNode sn;
typedef sn *snPtr;

void Push(snPtr *topPtr, int num)
{
	snPtr newPtr;
	
	newPtr = malloc(sizeof(sn));
	
	if (newPtr != NULL)
	{
		newPtr -> data = num;
		newPtr -> nextPtr = *topPtr;
		*topPtr = newPtr;
	}
	
	else
	{
		printf("\nMemory is not available.\n");
	}
}

int Pop(snPtr *topPtr)
{
	int pop;
	snPtr tempPtr;
	
	tempPtr = *topPtr;
	pop = (*topPtr) -> data;
	*topPtr = (*topPtr) -> nextPtr;
	free(tempPtr);
	
	return pop;
}

void Stack(int *a, snPtr sPtr)
{
	int i;
	
	for (i=0; i<SIZE; i++)
	{
		Push(&sPtr, a[i]);
	}
	
	for (i=0; i<SIZE; i++)
	{
		a[i] = Pop(&sPtr);
	}
}

void Show(int *a)
{
	int i;
	
	for (i=0; i<SIZE; i++)
	{
		printf("%d -> ", a[i]);
	}
}

int main()
{
	snPtr sPtr = NULL;
	int array[SIZE] = {0,1,2,3,4,5,6,7,8,9};
	
	printf("Before Stack Sort:\n");
	Show(array);
	
	Stack(array, sPtr);
	
	printf("\n\nAfter Stack Sort:\n");
	Show(array);
}
