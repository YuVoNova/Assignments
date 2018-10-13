#include <iostream>
#include "Account.h"

using namespace std;

Account::Account()
{
	Account::ID = 0;
	Account::password = "abc";
	Account::balance = 0;
}

void Account::SetAccount(int ID, string password, float balance)
{
	Account::ID = ID;
	Account::password = password;
	Account::balance = balance;
}

void Account::PrintAccountInfo()
{
	cout << endl << "Account Initial Info" << endl << endl;
	cout << "ID: " << ID << endl;
	cout << "Password: " << password << endl;
	cout << "Balance: " << balance << endl << endl;
}

void Account::Withdraw(float value)
{
	if (value > balance)
	{
		cout << endl << "You don't have enough money to withdraw." << endl;
	}
	
	else
	{
		balance -= value;
		cout << endl << "You have successfully withdrawn money.\nCurrent balance: " << balance << endl;
	}
}

void Account::Deposit(float value)
{
	balance += value;
	cout << endl << "You have successfully deposited money.\nCurrent balance: " << balance << endl;
}
