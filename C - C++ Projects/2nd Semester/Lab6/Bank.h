#ifndef Bank_H
#define Bank_H
#include <iostream>
#include "Account.h"
#include "Client.h"

using namespace std;

class Bank
{
	public:
		string name;
		
		Bank();
		void SetAccount(Client*);
		void TransferMoney(Account*, Account*);
};

#endif
