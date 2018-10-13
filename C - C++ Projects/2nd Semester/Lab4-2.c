#include <stdio.h>
#include <stdlib.h>


struct treeNode
{
	struct treeNode *leftPtr;
	int data;
	struct treeNode *rightPtr;
};

typedef struct treeNode TreeNode;
typedef TreeNode *TreeNodePtr;

void InsertNode(TreeNodePtr *treePtr, int value);
void Menu();
void Search(TreeNodePtr currentPtr, int value);

int main()
{
	int select = 0, item;
	TreeNodePtr rootPtr = NULL;
	
	while (select != 3)
	{
		Menu();
		printf("? ");
		scanf("%d", &select);
		
		switch (select)
		{
			case 1:
				printf("\nEnter the item you wish to add: ");
				scanf("%d", &item);
				InsertNode(&rootPtr, item);
				break;
				
			case 2:
				printf("\nEnter the item you wish to search: ");
				scanf("%d", &item);
				Search(rootPtr, item);
				break;
				
			default:
				printf("\nInvalid choice.\n");
				Menu();
				break;
		}
	}
}

void InsertNode(TreeNodePtr *treePtr, int value)
{
	if (*treePtr == NULL)
	{
		*treePtr = malloc(sizeof(TreeNode));
		
		if (*treePtr != NULL)
		{
			(*treePtr) -> data = value;
			(*treePtr) -> leftPtr = NULL;
			(*treePtr) -> rightPtr = NULL;
		}
		
		else
		{
			printf("%d not inserted!\n", value);
		}
	}
	
	else
	{
		if (value < (*treePtr) -> data)
		{
			InsertNode(&((*treePtr)->leftPtr), value);
		}
		
		else if (value > (*treePtr) -> data)
		{
			InsertNode(&((*treePtr) -> rightPtr), value);
		}
		
		else
		{
			printf("%d is already in the tree!\n", value);
		}
	}
}

void Menu()
{
	printf("Enter your choice:\n");
	printf("1-) Add Item to the Tree\n");
	printf("2-) Search Item from the Tree\n");
	printf("3-) Exit\n");
}

void Search(TreeNodePtr currentPtr, int value)
{
	int k = 0;
	
	while (k == 0)
	{
		if (currentPtr == NULL)
		{
			printf("%d is not found.", value);
			break;
		}
		
		else
		{
			if (value == (currentPtr) -> data)
			{
				printf("%d is found.", value);
				break;
			}
			
			else if (value > (currentPtr) -> data)
			{
				currentPtr = (currentPtr) -> rightPtr;
			}
			
			else if (value < (currentPtr) -> data)
			{
				currentPtr = (currentPtr) -> leftPtr;
			}
		}
	}
}
