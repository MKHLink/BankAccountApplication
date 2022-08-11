#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>

class BankAccount {
protected:
	double balance;
	double AIR;
	int NumMonDepo = 0;
	int NumMonWith = 0;
	double MonCharge;
	double MIR;
	double MI;
	double SC;
public:
	virtual void deposit(double x)
	{
		balance += x;
	}

	virtual void withdraw(double y)
	{
		balance -=y;
	}
	virtual void calcInt()
	{
		MIR = AIR / 12;
		MI = balance * MIR;
		balance = balance + MI;
	}

	virtual void monthlyProc()
	{
		balance = balance - 0;
		calcInt();
	}

};

#endif BANKACCOUNT_H
