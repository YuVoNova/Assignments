#include <stdio.h>
#include <stdlib.h>

struct TreeStruct
{
	int data;
	struct TreeStruct *leftPtr;
	struct TreeStruct *rightPtr;
};

typedef struct TreeStruct tree;
typedef tree *treePtr;

treePtr rootPtr = NULL;

void Insert(int data)
{
	treePtr newPtr = malloc(sizeof(struct TreeStruct));
	newPtr -> data = data;
	newPtr -> leftPtr = NULL;
	newPtr -> rightPtr = NULL;
	
	if (newPtr != NULL)
	{
		if (rootPtr == NULL)
		{
			rootPtr = newPtr;
		}
		
		else
		{
			treePtr currentPtr = rootPtr;
			
			while (!NULL)
			{
				if (data < currentPtr -> data)
				{
					if (currentPtr -> leftPtr == NULL)
					{
						currentPtr -> leftPtr = newPtr;
						break;
					}
					
					currentPtr = currentPtr -> leftPtr;
				}
				
				else
				{
					if (currentPtr -> rightPtr == NULL)
					{
						currentPtr -> rightPtr = newPtr;
						break;
					}
					
					currentPtr = currentPtr -> rightPtr;
				}
			}
		}
	}
}

void Preorder(treePtr rootPtr)
{
	if (rootPtr != NULL)
	{
		printf("%d -> ", rootPtr -> data);
		Preorder(rootPtr -> leftPtr);
		Preorder(rootPtr -> rightPtr);
	}
}

void Postorder(treePtr rootPtr)
{
	if (rootPtr != NULL)
	{
		Postorder(rootPtr -> leftPtr);
		Postorder(rootPtr -> rightPtr);
		printf("%d -> ", rootPtr -> data);
	}
}

void Inorder(treePtr rootPtr)
{
	if (rootPtr != NULL)
	{
		Inorder(rootPtr -> leftPtr);
		printf("%d -> ", rootPtr -> data);
		Inorder(rootPtr -> rightPtr);
	}
}

int main()
{
	int array[8] = {3,1,0,2,8,6,5,9}, i;
	
	for (i = 0; i < 8; i++)
	{
		Insert(array[i]);
	}
	
	Preorder(rootPtr);
	printf("\n\n");
	Postorder(rootPtr);
	printf("\n\n");
	Inorder(rootPtr);
	
	return 0;
}
