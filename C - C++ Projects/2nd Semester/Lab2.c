#include <stdio.h>
#include <stdlib.h>

struct CharNode
{
	char data;
	struct CharNode *nextPtr;
};

typedef struct CharNode node;
typedef node *nodePtr;

void Insert(nodePtr *sPtr, char value);
void ShowList(nodePtr tPtr);
int CheckList(nodePtr sPtr);
char Delete(nodePtr *sPtr, char value);

int main()
{
	nodePtr sPtr = NULL;
	int select = 0;
	char value;
	
	while (select != 3)
	{
		printf("1- Insert\n2- Delete\n3- Exit\nSelection: ");	scanf("%d", &select);
		
		if (select == 1)
		{
			printf("\nEnter a character: ");	scanf("\n%c", &value);
			Insert(&sPtr, value);
			ShowList(sPtr);
		}
		
		else if (select == 2)
		{
			if ( !CheckList(sPtr) )
			{
				printf("\nEnter the character you wish to delete: ");	scanf("\n%c", &value);
				
				if ( Delete(&sPtr, value) )
				{
					printf("\n%c has been deleted.\n", value);
					ShowList(sPtr);
				}
				
				else
				{
					printf("\n%c not found.\n", value);
					ShowList(sPtr);
				}
			}
			
			else
			{
				printf("\nList is empty.\n");
			}
		}
		
		else if (select == 3)
		{
			break;
		}
		
		else
		{
			printf("\nInvalid selection.\n");
		}
	}
	
	printf("\nThanks for using.");
}

void Insert(nodePtr *sPtr, char value)
{
	nodePtr nPtr, cPtr, pPtr;
	nPtr = malloc(sizeof(node));
	
	if (nPtr != NULL)
	{
		nPtr -> data = value;
		nPtr -> nextPtr = NULL;
		cPtr = *sPtr;
		pPtr = NULL;
		
		while (cPtr != NULL && value > cPtr -> data)
		{
			pPtr = cPtr;
			cPtr = cPtr -> nextPtr;
		}
		
		if (pPtr == NULL)
		{
			nPtr -> nextPtr = *sPtr;
			*sPtr = nPtr;
		}
		
		else
		{
			pPtr -> nextPtr = nPtr;
			nPtr -> nextPtr = cPtr;
		}
	}
	
	else
	{
		printf("\n%c couldn't be inserted.\n", value);
	}
}

void ShowList(nodePtr tPtr)
{
	if (tPtr != NULL)
	{
		printf("\n\n");
		
		while (tPtr != NULL)
		{
			printf("%c -> ", tPtr -> data);
			tPtr = tPtr -> nextPtr;
		}
		
		printf("NULL\n");
	}
	
	else
	{
		printf("\nThe list is empty.\n");
	}
}

int CheckList(nodePtr sPtr)
{
	return sPtr == NULL;
}

char Delete(nodePtr *sPtr, char value)
{
	nodePtr tPtr, cPtr, pPtr;
	
	if (value == (*sPtr) -> data)
	{
		tPtr = *sPtr;
		*sPtr = (*sPtr) -> nextPtr;
		
		free(tPtr);
		
		return value;
	}
	
	else
	{
		pPtr = *sPtr;
		cPtr = (*sPtr) -> nextPtr;
		
		while (cPtr != NULL && cPtr -> data != value)
		{
			pPtr = cPtr;
			cPtr = cPtr -> nextPtr;
		}
		
		if (cPtr != NULL)
		{
			tPtr = cPtr;
			pPtr -> nextPtr = cPtr -> nextPtr;
			
			free(tPtr);
			
			return value;
		}
	}
	
	return '\0';
}
