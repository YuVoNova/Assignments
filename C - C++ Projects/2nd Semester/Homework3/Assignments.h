#include "Student.h"
#include "Advisor.h"
#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

class Assignments
{
	public:
		void AssignStudentToAdvisor();
		void RecordStudent();
		void RecordAdvisor();
		void ShowRecordAdvisor(long int);
		void ShowRecordStudent(long int);
		void DeleteStudentRecord(long int);
		void DeleteAdvisorRecord(long int);
		string WhichSemester();
};
