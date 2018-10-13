#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

void InsertionSort(int *a, const int size);	// This sort function takes the address of the first element of array and the size of array.
void Swap(int *a1, int *a2);
void Show(int *a, const int size);

int main()
{
	int array[SIZE], i, j;
	int *ptr = &array[0];					// The pointer only takes the address of the first element to be able to use pointer arithmetic.
	
	srand(time(NULL));
	
	for (i=0; i<SIZE; i++)					// Filling the array randomly.
	{
		array[i] = (1 + rand() % 9999);
	}
	
	printf("Before Insertion Sort:\n\n");
	Show(ptr, SIZE);
	
	InsertionSort(ptr, SIZE);
	
	printf("\nAfter Insertion Sort:\n\n");
	Show(ptr, SIZE);
	
	return 0;
}

void InsertionSort(int *a, const int size)	// This function sorts the array's values from lowest to highest dpeending on the index.
{
	int i, j;
	
	for (i=1; i<size; i++)					// Outer loop checks the values before the current element one by one from the second element to the last element.
	{
		j = i;								// Counter "j" helps to not to lose the value of counter "i".
		
		while (*(a+j) > *(a+j+1))			// This condition checks if current element is needed to be sorted or not.
		{
			Swap(a+j, a+j+1);				// Swaps two elements if they are not sorted correctly.
			j--;							// This decrement takes the current array position one step behind.
		}
	}
}

void Swap(int *a1, int *a2)					// Simple swap function that takes two pointers and swaps their values.
{
	int temp = *a1;
	*a1 = *a2;
	*a2 = temp;
}

void Show(int *a, const int size)			// Show function lists the current array when called.
{
	int i;
	
	for (i=0; i<size; i++)
	{
		printf("%-5d -> ", *(a++));
		
		if ((i+1) % 10 == 0)
		{
			printf("\n");
		}
	}
}
