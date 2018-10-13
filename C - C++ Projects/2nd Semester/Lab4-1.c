#include <stdio.h>
#include <stdlib.h>

struct queueNode
{
	char data;
	struct queueNode *nextPtr;
};

typedef struct queueNode QueueNode;
typedef QueueNode *QueueNodePtr;


void printQueue (QueueNodePtr currentPtr);
int isEmpty (QueueNodePtr headPtr);
char dequeue (QueueNodePtr *headPtr, QueueNodePtr *tailPtr);
void enqueue (QueueNodePtr *headPtr, QueueNodePtr *tailPtr, char value);
void menu(void);


int main()
{
	QueueNodePtr headPtr = NULL;
	QueueNodePtr tailPtr = NULL;
	int choice;
	char item;
	
	menu();
	printf("? ");
	scanf("%d", &choice);
	
	while (choice!=3)
	{
		switch (choice)
		{
			case 1:
				printf("Enter a character: ");
				scanf("\n%c",&item);
				enqueue(&headPtr, &tailPtr, item);
				printQueue(headPtr);
				break;
				
			case 2:
				if (!isEmpty(headPtr))
				{
					item = dequeue(&headPtr, &tailPtr);
					printf("%c has been dequeued.\n", item);
				}
				
				printQueue(headPtr);
				break;
				
			default:
				printf("Invalid choice.\n\n");
				menu();
				break;
		}
		menu();
		printf("? ");
		scanf("%d",&choice);
	}
	
	printf("End of run.\n");
	
	return 0;
}

void menu(void)
{
	printf("Enter your choice:\n");
	printf("1-) Add Item to the Queue\n");
	printf("2-) Remove Item from the Queue\n");
	printf("3-) Exit\n");
}

void enqueue (QueueNodePtr *headPtr, QueueNodePtr *tailPtr, char value)
{
	QueueNodePtr newPtr;
	newPtr = malloc(sizeof(QueueNode));
	
	if (newPtr != NULL)
	{
		newPtr->data = value;
		newPtr->nextPtr = NULL;
		
		if (isEmpty(*headPtr))
		{
			*headPtr=newPtr;
		}
		
		else
		{
			(*tailPtr)->nextPtr = newPtr;
		}
		
		*tailPtr = newPtr;
	}
	else{
		printf("%c is not inserted. No memory available.\n",value);
	}
	
}

char dequeue (QueueNodePtr *headPtr, QueueNodePtr *tailPtr)
{
	char value;
	QueueNodePtr tempPtr;
	
	value = (*headPtr) -> data;
	tempPtr = *headPtr;
	*headPtr = (*headPtr) -> nextPtr;
	
	free(tempPtr);
	
	return value;
}

int isEmpty(QueueNodePtr headPtr)
{
	return headPtr == NULL;
}

void printQueue (QueueNodePtr currentPtr)
{
	if (currentPtr == NULL)
	{
		printf("Queue is empty.\n\n");
	}
	
	else
	{
		printf("The queue is:\n");
		
		while (currentPtr!=NULL)
		{
			printf("%c --> ",currentPtr->data);
			currentPtr = currentPtr->nextPtr;
		}
		
		printf("NULL\n\n");
	}
}
