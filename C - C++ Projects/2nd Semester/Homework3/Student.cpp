#include "Student.h"

using namespace std;

Student::Student()
{
	firstName = "Default";
	lastName = "Name";
	studentID << 0;
	year << 1;
	GPA = 0;
	advisor << 0;
	isAssigned << false;
}

void Student::CreateStudent()
{
	string str;
	long int lnum;
	int num;
	double dnum = -1;
	
	cout << endl << "***************" << endl << "CREATE STUDENT" << endl << "***************" << endl;
	cout << endl << "Enter first name: ";	cin >> str;		setFirstName(str);
	cout << endl << "Enter last name: ";	cin >> str;		setLastName(str);
	cout << endl << "Enter ID: ";			cin >> lnum;	setStudentID(lnum);
	cout << endl << "Enter year: ";			cin >> num;		setYear(num);
	while (dnum < 0 || dnum > 4)
	{
		cout << endl << "Enter GPA: ";			cin >> dnum;
	}
	setGPA(dnum);
	cout << endl << endl << "A new student has been created successfully." << endl;
	cout << endl << "***************" << endl;
}

void Student::ShowStudentDetails()
{
	cout << endl << "***************" << endl;
	cout << "Name: " << Student::getFirstName() << " " << Student::getLastName() << endl;
	cout << "ID: " << Student::getStudentID() << endl;
	cout << "Year: " << Student::getYear() << endl;
	cout << "GPA: " << Student::getGPA() << endl;
	if (Student::getIsAssigned())	cout << "Advisor ID: " << Student::getAdvisor() << endl;
	cout << "Student Status: ";		Student::CurrentStatus(Student::isSuccessful(Student::getGPA()));
	cout << "***************" << endl;
}

void Student::CurrentStatus(bool value)
{
	if (value)
	{
		cout << "SUCCESSFUL" << endl;
	}
	
	else
	{
		cout << "NOT SUCCESSFUL" << endl;
	}
}

bool Student::isSuccessful(double value)
{
	if (value >= 2.5)	return true;
	else return false;
}
