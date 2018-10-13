#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream myFile;
	myFile.open("Test.txt");
	myFile << "Write file.";
	myFile.close();
	
	return 0;
}
