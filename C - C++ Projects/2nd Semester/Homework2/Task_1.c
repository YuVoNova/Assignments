#include <stdio.h>
#include <stdlib.h>

struct NodeStruct
{
	int data;
	struct NodeStruct *nextPtr;
};

typedef struct NodeStruct node;
typedef node *nodePtr;

nodePtr InsertNode(nodePtr headPtr, int data)
{
	nodePtr newPtr, currentPtr = headPtr;
	newPtr = malloc(sizeof(struct NodeStruct));
	
	if (newPtr != NULL)
	{
		newPtr -> data = data;
		
		if (headPtr == NULL)
		{
			newPtr -> nextPtr = NULL;
			printf("\n%d has been added to the list.\n", data);
			
			return newPtr;
		}
		
		else
		{
			while (currentPtr -> nextPtr != NULL)
			{
				currentPtr = currentPtr -> nextPtr;
			}
			
			newPtr -> nextPtr = NULL;
			currentPtr -> nextPtr = newPtr;
			
			printf("\n%d has been added to the list.\n", data);
			
			return headPtr;
		}
	}
	
	else
	{
		printf("\n%d was not inserted, memory is not available.\n", data);
		
		return headPtr;
	}
}

nodePtr DeleteNode(nodePtr headPtr, nodePtr elementPtr)
{
	nodePtr tempPtr = headPtr;
	
	if (headPtr -> data == elementPtr -> data)
	{
		headPtr = headPtr -> nextPtr;
		free(tempPtr);
		return headPtr;
	}
	
	nodePtr previousPtr = headPtr;
	
	while (previousPtr -> nextPtr -> data != elementPtr -> data)
	{
		previousPtr = previousPtr -> nextPtr;
	}
	
	previousPtr -> nextPtr = elementPtr -> nextPtr;
	elementPtr -> nextPtr = NULL;
	free(elementPtr);
	
	return headPtr;
}

nodePtr Find(nodePtr headPtr, int data)
{
	while (headPtr != NULL)
	{
		if (headPtr -> data == data)
		{
			break;
		}
		
		else
		{
			headPtr = headPtr -> nextPtr;
		}
	}
	
	return headPtr;
}

int CountNodes(nodePtr headPtr)
{
	int count = 0;
	
	if (headPtr == NULL)
	{
		return count;
	}
	
	count = CountNodes(headPtr -> nextPtr);
	
	return count + 1;
}

void Display(nodePtr headPtr)
{
	if (headPtr == NULL)
	{
		printf("\nThe list is empty.\n");
	}
	
	else
	{
		printf("\n");
		
		while (headPtr != NULL)
		{
			printf("%-3d --> ", headPtr -> data);
			headPtr = headPtr -> nextPtr;
		}
		
		printf("NULL\n");
	}
}

int main()
{
	nodePtr headPtr = NULL, foundPtr;
	int select = 0, value;
	
	printf("Welcome to Node Lister!");
	while (select != 5)
	{
		printf("\n1- Insert Element\n2- Delete Element\n3- Find Element\n4- Count Element Number\n5- Exit");
		printf("\nSelection: ");	scanf("%d", &select);
		
		switch (select)
		{
			case 1:
				printf("\nEnter the element you wish to add: ");	scanf("%d", &value);
				headPtr = InsertNode(headPtr, value);
				Display(headPtr);
				break;
				
			case 2:
				while (headPtr != NULL)
				{
					printf("\nEnter the element you wish to delete: ");	scanf("%d", &value);
					foundPtr = Find(headPtr, value);
					
					if (foundPtr == NULL)
					{
						printf("\nThe given element could not be found the list.\n");
						break;
					}
					
					headPtr = DeleteNode(headPtr, foundPtr);
					Display(headPtr);
					break;
				}
				
				if (headPtr == NULL)
				{
					printf("\nThe list is empty.\n");
				}
				break;
				
			case 3:
				if (headPtr != NULL)
				{
					printf("\nEnter the element you wish to find: ");	scanf("%d", &value);
					foundPtr = Find(headPtr, value);
					
					if (foundPtr != NULL)
					{
						printf("\nThe element %d has been found.\n", foundPtr -> data);
					}
					
					else
					{
						printf("\nThe given element could not be found the list.\n");
					}
					
					Display(headPtr);
				}
				
				else
				{
					printf("\nThe list is empty.\n");
				}
				break;
				
			case 4:
				printf("\nThe list has been counted. Node Count: %d\n", CountNodes(headPtr));
				Display(headPtr);
				break;
				
			case 5:
				break;
				
			default:
				printf("\nInvalid selection.\n");
				break;
		}
	}
	
	printf("\nEnd of the program!");
	return 0;
}
