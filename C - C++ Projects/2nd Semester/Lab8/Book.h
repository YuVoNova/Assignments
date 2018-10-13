#include <iostream>

using namespace std;

class Book
{
	private:
		int ID;
		string name;
		string author;
		int pageNum;
		bool status;
		
	public:
		Book();
		void PrintBookInfo();
		
		inline void setID(int value)		{ID = value;}
		inline void setName(string value)	{name = value;}
		inline void setAuthor(string value)	{author = value;}
		inline void setPageNum(int value)	{pageNum = value;}
		inline void setStatus(bool value)	{status = value;}
		
		inline int getID()					{return ID;}
		inline string getName()				{return name;}
		inline string getAuthor()			{return author;}
		inline int getPageNum()				{return pageNum;}
		inline bool getStatus()				{return status;}
};
