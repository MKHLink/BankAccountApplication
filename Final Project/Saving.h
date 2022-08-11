#ifndef SAVINGS_H
#define SAVINGS_H

#include "BankAccount.h"

class Savings : protected BankAccount 
{
public:
	bool status(double b);
	Savings(double startingBalance, double AnnualInterest);
	void deposit(double amt);   
	void withdraw(double amt);   
	void monthlyProc();
};

#endif SAVINGS_H
