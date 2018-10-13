#include <iostream>
#include <fstream>

using namespace std;

class Advisor
{
	private:
		string firstName, lastName;
		long int advisorID;
		int studentsAssigned;
		int allowedStudentCount;
		
	public:
		Advisor();
		void CreateAdvisor();
		void ShowAdvisorDetails();
		
		inline void setFirstName(string value)			{firstName = value;}
		inline void setLastName(string value)			{lastName = value;}
		inline void setAdvisorID(long int value)		{advisorID = value;}
		inline void setStudentsAssigned(int value)		{studentsAssigned = value;}
		
		inline string getFirstName()					{return firstName;}
		inline string getLastName()						{return lastName;}
		inline long int getAdvisorID()					{return advisorID;}
		inline int getStudentsAssigned()				{return studentsAssigned;}
		inline const int getAllowedStudentCount()		{return allowedStudentCount;}
};
