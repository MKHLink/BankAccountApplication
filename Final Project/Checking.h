#ifndef CHECKING_H
#define CHECKING_H
#include "BankAccount.h"

class Checking : protected BankAccount {

public:
	Checking(double startingBalance, double AnnualInterest);
	void deposit(double amt);  
	void withdraw(double amt); 
	void monthlyProc();
	
};

#endif CHECKING_H
