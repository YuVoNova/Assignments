#include "Advisor.h"

using namespace std;

Advisor::Advisor()
{
	firstName = "Default";
	lastName = "Name";
	advisorID << 0;
	studentsAssigned << 0;
	allowedStudentCount << 3;
}

void Advisor::CreateAdvisor()
{
	string str;
	long int lnum;
	
	cout << endl << "***************" << endl << "CREATE ADVISOR" << endl << "***************" << endl;
	cout << endl << "Enter first name: ";	cin >> str;		setFirstName(str);
	cout << endl << "Enter last name: ";	cin >> str;		setLastName(str);
	cout << endl << "Enter ID: ";			cin >> lnum;	setAdvisorID(lnum);
	cout << endl << endl << "A new advisor has been created successfully." << endl;
	cout << endl << "***************" << endl;
}

void Advisor::ShowAdvisorDetails()
{
	cout << endl << "***************" << endl;
	cout << "Name: " << firstName << " " << lastName << endl;
	cout << "ID: " << advisorID << endl;
	cout << "Students Assigned: " << studentsAssigned << endl;
	cout << "***************" << endl;
}





















