#ifndef Account_H
#define Account_H
#include <iostream>

using namespace std;

class Account
{
	public:	
		int ID;
		string password;
		float balance;
		
		Account();
		void SetAccount(int, string, float);
		void PrintAccountInfo();
		void Withdraw(float);
		void Deposit(float);
};

#endif
