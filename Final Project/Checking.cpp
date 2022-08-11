#include "Checking.h"

using namespace std;

Checking::Checking(double startingBalance, double AnnualInterest)
{
	balance = startingBalance;
	AIR = AnnualInterest;
}
void Checking::deposit(double amt)
{
	BankAccount::deposit(amt);
	NumMonDepo++;
}
void Checking::withdraw(double amt) 
{
	if (amt < balance)
	{
		BankAccount::withdraw(amt);
		NumMonWith++;
	}
	else
	{
		cout << "Account is inactive due to insufficient funds" << endl;
		balance = balance - 15;
		BankAccount::withdraw(amt);
	}
}
void Checking::monthlyProc()
{
	balance = balance - (5+(0.1*NumMonWith));
	calcInt();
	cout << "Your Balance is: " << balance << endl;
	cout << "You made " << NumMonWith << " total withdrawals" << endl;
	cout << "You made " << NumMonDepo << " total deposits" << endl;
	NumMonDepo = 0;
	NumMonWith = 0;
}


