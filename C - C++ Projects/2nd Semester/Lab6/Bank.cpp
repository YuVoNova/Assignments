#include <iostream>
#include "Bank.h"
#include "Account.h"

using namespace std;

Bank::Bank()
{
	name = "default";
}

void Bank::SetAccount(Client *c)
{
	int ID;
	string password;
	float balance;
	
	cout << endl << "Enter your ID: ";	cin >> ID;
	cout << "Enter your password: ";	cin >> password;
	cout << "Enter your balance: ";		cin >> balance;
	
	c -> acc.SetAccount(ID, password, balance);
}

void Bank::TransferMoney(Account *a, Account *b)
{
	float transferBalance;
	
	cout << endl << "Enter balance you wish to transfer: ";	cin >> transferBalance;
	
	if (a -> balance >= transferBalance)
	{
		a -> balance -= transferBalance;
		b -> balance += transferBalance;
		cout << endl << "Transfer has been successful. The balance account transfered from is now " << a -> balance << " and the balance account transfered to is now ";
		cout << b -> balance << "." << endl;
	}
	
	else
	{
		cout << "An error has occured, not enough money in the account to transfer." << endl;
	}
}
