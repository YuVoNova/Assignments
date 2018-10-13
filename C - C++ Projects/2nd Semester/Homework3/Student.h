#include <iostream>
#include <fstream>

using namespace std;

class Student
{
	private:
		string firstName, lastName;
		long int studentID;
		int year;
		double GPA;
		long int advisor;
		bool isAssigned;
		
	public:
		Student();
		void CreateStudent();
		void ShowStudentDetails();
		void CurrentStatus(bool);
		bool isSuccessful(double);
		
		inline void 	setFirstName(string value)		{firstName = value;}
		inline void 	setLastName(string value)		{lastName = value;}
		inline void 	setStudentID(long int value)	{studentID = value;}
		inline void 	setYear(int value)				{year = value;}
		inline void 	setGPA(double value)			{GPA = value;}
		inline void 	setAdvisor(long int value)		{advisor = value;}
		inline void 	setIsAssigned(bool value)		{isAssigned = value;}
		
		inline string 	getFirstName()					{return firstName;}
		inline string 	getLastName()					{return lastName;}
		inline long int getStudentID()					{return studentID;}
		inline int 		getYear()						{return year;}
		inline double 	getGPA()						{return GPA;}
		inline long int getAdvisor()					{return advisor;}
		inline bool 	getIsAssigned()					{return isAssigned;}
};
