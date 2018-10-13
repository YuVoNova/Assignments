#ifndef Client_H
#define Client_H
#include <iostream>
#include "Account.h"

using namespace std;

class Client
{
	public:
		string TC;
		string name;
		int birthYear;
		Account acc;
		
		Client();
		void SetClientInfo(string, string, int);
		void ChangePassword();
		void PrintClientInfo();
};

#endif
