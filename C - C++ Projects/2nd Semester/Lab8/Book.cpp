#include <iostream>
#include "Book.h"

using namespace std;

Book::Book()
{
	Book::setID(0);
	Book::setName("noName");
	Book::setAuthor("noAuthor");
	Book::setPageNum(0);
	Book::setStatus(true);
}

void Book::PrintBookInfo()
{
	cout << endl << "ID: " << Book::getID() << endl << "Name: " << Book::getName() << endl << "Author: " << Book::getAuthor() << endl <<
	"Page Number: " << Book::getPageNum() << endl << "Status: " << (Book::getStatus() == true ? "Available" : "Not Available") << endl << "---------------";
}
