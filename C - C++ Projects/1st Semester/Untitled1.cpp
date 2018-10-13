#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

struct Student
{
	char name[20];
	int ID;
	int birth;
	int phone;
};

int main()
{
	struct Student student1;
	
	printf("Enter name: "); scanf("%s", student1.name);
	printf("Enter ID: "); scanf("%d", &student1.ID);
	printf("Enter birth: "); scanf("%d", &student1.birth);
	printf("Enter phone: "); scanf("%d", &student1.phone);
	
	printf("\nName: %s", student1.name);
	printf("\nID: %d", student1.ID);
	printf("\nBirth: %d", student1.birth);
	printf("\nPhone: %d", student1.phone);
}
