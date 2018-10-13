#include <stdio.h>
#include <string.h>

struct course
{
	char courseName[20];
	int courseID;
	float grade;
};

void Menu();
void Add();
void Delete();
void List();
void Update();

FILE *file;

int main()
{
	Menu();
	
	return 0;
}

void Menu()
{
	int select;
	
	while (select != 5)
	{
		printf("\n1- Add Course\n2- Delete Course\n3- List Course\n4- Update Course\n5- Exit\nSelection: ");	scanf("%d", &select);
		
		if (select == 1)
		{
			Add();
		}
		
		else if (select == 2)
		{
			Delete();
		}
		
		else if (select == 3)
		{
			List();
		}
		
		else if (select == 4)
		{
			Update();
		}
		
		else if (select == 5)
		{
			break;
		}
		
		else
		{
			printf("\nInvalid selection.\n");
			continue;
		}
	}
}

void Add()
{
	struct course newCourse;
	
	printf("\n------------------------------------\n");
	printf("\nCourse ID: ");	scanf("%d", &newCourse.courseID);
	printf("Course Name: ");	scanf("%s", newCourse.courseName);
	printf("Course Grade: ");	scanf("%f", &newCourse.grade);
	printf("\n------------------------------------\n");
	
	file = fopen("courses.dat", "a+");
	fseek(file, 0, SEEK_END);
	fwrite(&newCourse, sizeof(struct course), 1, file);
	fclose(file);
}

void Delete()
{
	struct course delCourse;
	struct course emptyCourse;
	
	emptyCourse.courseID = 0;
	
	int delID, c1 = 0, c2 = 0;
	
	printf("\n------------------------------------\n");
	printf("\nEnter the course ID you wish to delete: ");	scanf("%d", &delID);
	
	file = fopen("courses.dat", "a+");
	fseek(file, 0, SEEK_SET);
	
	while (!feof(file))
	{
		fread(&delCourse, sizeof(struct course), 1, file);
		printf("%d", delCourse.courseID);
		
		c1++;
		
		if (delID == delCourse.courseID)
		{
			fseek(file, sizeof(struct course)*(delID-1), SEEK_SET);
			fwrite(&emptyCourse, sizeof(struct course), 1, file);
			printf("Course successfully deleted.\n");
			break;
		}
		
		else
		{
			c2++;
		}
	}
	
	if (c1 == c2)
	{
		printf("ID was not registered.\n");
	}
	
	fclose(file);
	
	printf("\n------------------------------------\n");
}

void List()
{
	struct course courses;
	
	file = fopen("courses.dat", "r");
	fseek(file, 0, SEEK_SET);
	
	printf("\n------------------------------------\n");
	printf("%-20s%-20s%-20s\n","ID","NAME","GRADE");
	
	while (!feof(file))
	{
		fread(&courses, sizeof(struct course), 1, file);
		
		if (courses.courseID == 0)
		{
			continue;
		}
		
		else
		{
			printf("%-20d%-20s%-20f\n", courses.courseID, courses.courseName, courses.grade);
		}
	}
	
	fclose(file);
	
	printf("\n------------------------------------\n");
}

void Update()
{
	
}
