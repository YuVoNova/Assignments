#include <iostream>
#include <fstream>
#include "Assignments.h"

using namespace std;

inline void DisplayMenu();

int main(int argc, char** argv)
{
	int select = 1;
	long int ID = 0;
	Assignments assign;
	
	cout << "WELCOME TO THE STUDENT AUTOMATION!" << endl << endl << "***************" << endl << "Semester: " << assign.WhichSemester() << endl
	<< "***************" << endl << endl;
	
	while (select != 0)
	{
		DisplayMenu();
		cin >> select;
		
		switch (select)
		{
			case 1:
				assign.RecordStudent();
				break;
				
			case 2:
				assign.RecordAdvisor();
				break;
				
			case 3:
				cout << endl << "***************" << endl << "SHOW STUDENT DETAILS" << endl << "***************" << endl;
				cout << "Enter the ID you wish to check: ";		cin >> ID;
				assign.ShowRecordStudent(ID);
				cout << "Enter the ID you wish to check: ";	
				break;
				
			case 4:
				cout << endl << "***************" << endl << "SHOW ADVISOR DETAILS" << endl << "***************" << endl;
				cout << "Enter the ID you wish to check: ";		cin >> ID;
				assign.ShowRecordAdvisor(ID);
				break;
				
			case 5:
				assign.AssignStudentToAdvisor();
				break;
			
			case 0:
				break;
				
			default:
				cout << endl << endl << "Invalid selection!" << endl << endl;
				break;
		}
	}
	
	cout << endl << "Thanks for running!";
	return 0;
}

inline void DisplayMenu()
{
	cout << "***************" << endl << "MENU" << endl << "***************" << endl << endl;
	cout << "1) Create Student\n2) Create Advisor\n3) Show Student Record\n4) Show Record Advisor\n5) Assign Student To Advisor\n0) Terminate Program\n";
	cout << endl << "Selection: ";
}
