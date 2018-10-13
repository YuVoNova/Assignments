#include <iostream>
#include <fstream>
#include "Account.h"

using namespace std;

int main(int argc, char** argv)
{
	Account acc;
	
	ofstream wf;
	wf.open("Test.txt", ios::in | ios::app | ios::out);
	wf.write((char*)(&acc), sizeof(Account));
	wf.close();
	
	return 0;
}
