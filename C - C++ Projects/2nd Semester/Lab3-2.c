#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

struct StackNode
{
	char data;
	struct StackNode *nextPtr;
};

typedef struct StackNode sn;
typedef sn *snPtr;

void Push(snPtr *topPtr, char c)
{
	snPtr newPtr;
	
	newPtr = malloc(sizeof(sn));
	
	if (newPtr != NULL)
	{
		newPtr -> data = c;
		newPtr -> nextPtr = *topPtr;
		*topPtr = newPtr;
	}
	
	else
	{
		printf("\nMemory is not available.\n");
	}
}

char Pop(snPtr *topPtr)
{
	char pop;
	snPtr tempPtr;
	
	tempPtr = *topPtr;
	pop = (*topPtr) -> data;
	*topPtr = (*topPtr) -> nextPtr;
	free(tempPtr);
	
	return pop;
}

void Stack(char *a, char *b, snPtr sPtr, int size)
{
	int i;
	
	for (i=0; i<size; i++)
	{
		Push(&sPtr, a[i]);
	}
	
	for (i=0; i<size; i++)
	{
		b[i] = Pop(&sPtr);
	}
}

int IsPalindrome(char *a, char *b, int size)
{
	int i;
	
	for (i=0; i<size; i++)
	{
		if (a[i] != b[i])
		{
			return 0;
		}
	}
	
	return 1;
}

int main()
{
	snPtr sPtr = NULL;
	int i = 0, size = 0;
	char array1[SIZE], array2[SIZE];
	
	printf("Enter a string:\t");	scanf("%s", array1);
	
	while (array1[i] != '\0')
	{
		array2[i] = array1[i];
		size++;
		i++;
	}
	
	printf("\nBefore Stack Sorted: %s\n", array1);
	
	Stack(array1, array2, sPtr, size);
	
	printf("\nAfter Stack Sorted: %s\n", array2);
	
	if (IsPalindrome(array1, array2, size) == 1)
	{
		printf("\nThe word %s is palindrome.", array1);
	}
	
	else
	{
		printf("\nThe word %s is not palindrome.", array1);
	}
	
	return 1;
}
