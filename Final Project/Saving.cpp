#include "Saving.h"

using namespace std;

Savings::Savings(double startingBalance, double AnnualInterest)
{
	balance = startingBalance;
	AIR = AnnualInterest;
}

bool Savings::status(double b)
{
	if (b < 25)
	{
		return false;
	}
	else
	{
		return true;
	}
}

void Savings::deposit(double amt)   
{
	BankAccount::deposit(amt);
	NumMonDepo++;
}
void Savings::withdraw(double amt)
{
	if (amt < balance)
	{
		BankAccount::withdraw(amt);
		NumMonWith++;
	}
	else
	{
		cout << "Insuffient funds to complete this transaction" << endl;
	}
}

void Savings::monthlyProc()
{
	if (NumMonWith > 4)
	{
		balance = balance - (1 * (NumMonWith - 4));
		calcInt();
		cout << "Your Balance is: " << balance << endl;
		cout << "You made " << NumMonWith << " total withdrawals" << endl;
		cout << "You made " << NumMonDepo << " total deposits" << endl;
		NumMonDepo = 0;
		NumMonWith = 0;
	}
	else
	{
		calcInt();
		cout << "Your Balance is: " << balance << endl;
		cout << "You made " << NumMonWith << " total withdrawals" << endl;
		cout << "You made " << NumMonDepo << " total deposits" << endl;
		NumMonDepo = 0;
		NumMonWith = 0;
	}
}