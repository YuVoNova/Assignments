#include <iostream>
#include "Book.h"

using namespace std;

void AddBook(Book* book);
void BorrowBook(Book* books, int size);
void ReturnBook(Book* books, int size);
void DisplayBooks(Book* books, int size);

static int holdID = 1;

int main(int argc, char** argv)
{
	Book books[25];
	int select = 0;
	int bookCounter = 0;
	bool quitLoop = false;
	
	while(!quitLoop)
	{
		cout << "1- Add A Book\n2- Borrow A Book\n3- Return A Book\n4- Display Books\n5- Exit\n---------------\n";	cin >> select;
		
		switch (select)
		{
			case 1:
				cout << endl << "---------------\nADD A BOOK\n---------------\n";
				AddBook(&books[bookCounter++]);
				break;
			
			case 2:
				cout << endl << "---------------\nBORROW A BOOK\n---------------\n";
				BorrowBook(books, bookCounter);
				break;
				
			case 3:
				cout << endl << "---------------\nRETURN A BOOK\n---------------\n";
				ReturnBook(books, bookCounter);
				break;
				
			case 4:
				cout << endl << "---------------\nDISPLAY BOOKS\n---------------\n";
				DisplayBooks(books, bookCounter);
				break;
				
			case 5:
				quitLoop = true;
				break;
				
			default:
				cout << endl << "Invalid selection." << endl;
		}
	}
	
	return 0;
}

void AddBook(Book* book)
{
	string str;
	int page;
	
	book -> setID(holdID++);
	cout << endl << "---------------" << endl;
	cout << endl << "Enter book's name: ";		cin >> str;		book -> setName(str);
	cout << endl << "Enter author's name: ";	cin >> str;		book -> setAuthor(str);
	cout << endl << "Enter page number: ";		cin >> page;	book -> setPageNum(page);
	cout << endl << "---------------" << endl;
}

void BorrowBook(Book* books, int size)
{
	int borrowID;
	int i;
	bool isBookFound = false;
	
	cout << endl << "---------------" << endl;
	cout << "Enter the book ID you wish to borrow: ";		cin >> borrowID;
	
	for (i = 0; i < size; i++)
	{
		if (books[i].getID() == borrowID)
		{
			isBookFound = true;
			break;
		}
	}
	
	if (isBookFound)
	{
		books[i].setStatus(false);
		cout << endl << "The book " << borrowID << " has been borrowed and it's status set to \"Borrowed\"." << endl;
		books[i].PrintBookInfo();
	}
	
	else
	{
		cout << endl << "The book " << borrowID << " was not found in the library." << endl;
	}
	
	cout << "---------------" << endl;
}

void ReturnBook(Book* books, int size)
{
	int returnID;
	int i;
	bool isBookFound = false;
	
	cout << endl << "---------------" << endl;
	cout << "Enter the book ID you wish to return: ";		cin >> returnID;
	
	for (i = 0; i < size; i++)
	{
		if (books[i].getID() == returnID)
		{
			isBookFound = true;
			break;
		}
	}
	
	if (isBookFound)
	{
		if (books[i].getStatus())
		{
			cout << endl << "The book " << returnID << " is already available in the library." << endl;
		}
		
		else
		{
			books[i].setStatus(true);
			cout << endl << "The book " << returnID << " has been returned successfully to the library." << endl;
		}
	}
	
	else
	{
		cout << endl << "The book " << returnID << " was not found in the library." << endl;
	}
	
	cout << "---------------" << endl;
}

void DisplayBooks(Book* books, int size)
{
	for (int i = 0; i < size; i++)
	{
		books[i].PrintBookInfo();
	}
	
	cout << endl;
}




















