#include "Assignments.h"

using namespace std;

void Assignments::AssignStudentToAdvisor()
{
	string studentfile = "Students.txt";
	string advisorfile = "Advisors.txt";
	string tempfile = "Temp.txt";
	long int studentID, advisorID;
	bool isStudentOk = false, isAdvisorOk = false;
	Advisor advisor;	Student student;
	Advisor tempad;		Student tempst;
	
	cout << endl << "***************" << endl << "ASSIGN STUDENT TO ADVISOR" << endl << "***************" << endl;
	cout << "Enter the student ID you wish to assign to an advisor: ";	cin >> studentID;
	cout << "Enter the advisor ID you wist assign the student: ";		cin >> advisorID;
	
	ifstream inStudent;		ifstream inAdvisor;		ofstream outTemp;
	
	inStudent.open(studentfile.c_str(), ios::in | ios::app | ios::binary);
	
	while (inStudent.read((char*)(&student), sizeof(Student)))
	{
		if (student.getStudentID() == studentID)
		{
			if (!(student.getIsAssigned()))
			{
				isStudentOk = true;
				break;
			}
		}
	}
	
	inStudent.close();
	
	inAdvisor.open(advisorfile.c_str(), ios::in | ios::app | ios::binary);
	
	while (inAdvisor.read((char*)(&advisor), sizeof(Advisor)))
	{
		if (advisor.getAdvisorID() == advisorID)
		{
			if (advisor.getStudentsAssigned() < advisor.getAllowedStudentCount())
			{
				isAdvisorOk = true;
				break;
			}
		}
	}
	
	inAdvisor.close();
	
	if (isAdvisorOk && isStudentOk)
	{
		advisor.setStudentsAssigned(advisor.getStudentsAssigned() + 1);
		student.setAdvisor(advisor.getAdvisorID());
		student.setIsAssigned(true);
		
		outTemp.open(tempfile.c_str(), ios::out | ios::app | ios::binary);
		inAdvisor.open(advisorfile.c_str(), ios::in | ios::app | ios::binary);
		
		while (inAdvisor.read((char*)(&tempad), sizeof(Advisor)))
		{
			if (tempad.getAdvisorID() != advisorID)
			{
				outTemp.write((char*)(&tempad), sizeof(Advisor));
			}
		}
		
		outTemp.write((char*)(&advisor), sizeof(Advisor));
		
		outTemp.close();
		inAdvisor.close();
		remove("Advisors.txt");
		rename("Temp.txt", "Advisors.txt");
		
		outTemp.open(tempfile.c_str(), ios::out | ios::app | ios::binary);
		inStudent.open(studentfile.c_str(), ios::in | ios::app | ios::binary);
		
		while (inStudent.read((char*)(&tempst), sizeof(Student)))
		{
			if (tempst.getStudentID() != studentID)
			{
				outTemp.write((char*)(&tempst), sizeof(Student));
			}
		}
		
		outTemp.write((char*)(&student), sizeof(Student));
		
		outTemp.close();
		inStudent.close();
		remove("Students.txt");
		rename("Temp.txt", "Students.txt");
		
		cout << endl << "The assignment operation was successful." << endl << "***************" << endl;
	}
	
	else
	{
		cout << endl << "There was en error during assigning operation." << endl << "***************" << endl;
	}
}

void Assignments::RecordAdvisor()
{
	string advisorfile = "Advisors.txt";
	ofstream outAdvisors;
	outAdvisors.open(advisorfile.c_str(), ios::out | ios::app | ios::binary);
	
	Advisor advisor;
	advisor.CreateAdvisor();
	
	outAdvisors.write((char*)(&advisor), sizeof(Advisor));
	outAdvisors.close();
}

void Assignments::RecordStudent()
{
	string studentfile = "Students.txt";
	ofstream outStudents;
	outStudents.open(studentfile.c_str(), ios::out | ios::app | ios::binary);
	
	Student student;
	student.CreateStudent();
	
	outStudents.write((char*)(&student), sizeof(Student));
	outStudents.close();
}

void Assignments::ShowRecordAdvisor(long int ID)
{
	string advisorfile = "Advisors.txt";
	bool isFound = false;
	ifstream inAdvisors;
	Advisor advisor;
	Advisor advisorFound;
	
	inAdvisors.open(advisorfile.c_str(), ios::in | ios::app | ios::binary);
	
	while (inAdvisors.read((char*)(&advisor), sizeof(Advisor)))
	{
		if (advisor.getAdvisorID() == ID)
		{
			advisorFound = advisor;
			isFound = true;
		}
	}
	
	inAdvisors.close();
	
	if (isFound)
	{
		advisorFound.ShowAdvisorDetails();
	}
	
	else
	{
		cout << endl << "Advisor recorded with ID: " << ID << " couldn't be found." << endl;
	}
}

void Assignments::ShowRecordStudent(long int ID)
{
	string studentfile = "Students.txt";
	bool isFound = false;
	Student studentFound;
	ifstream inStudents;
	inStudents.open(studentfile.c_str(), ios::in | ios::binary);
	
	Student student;
	inStudents.read((char*)(&student), sizeof(Student));
	cout<<student.getIsAssigned();
	/*
	while (inStudents.read((char*)(&student), sizeof(Student)))
	{
		student.ShowStudentDetails();
		if (student.getStudentID() == ID)
		{
			isFound = true;
			studentFound = student;
			break;
		}
	}
	*/
	//inStudents.close();
	
	if (isFound)
	{
		studentFound.ShowStudentDetails();
	}
	
	else
	{
		cout << endl << "Student recorded with ID: " << ID << " couldn't be found." << endl;
	}
}

string Assignments::WhichSemester()
{
	time_t now = time(0);
	tm *ltm = localtime(&now);
	
	int month = 1 + ltm -> tm_mon;
	
	if (month >= 9 || month == 1)	return "SPRING";
	else if (month >= 2 && month <= 6)	return "FALL";
	else return "SUMMER";
}
