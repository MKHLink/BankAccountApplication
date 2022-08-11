#include "Saving.h"
#include "Checking.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	double x=0, y=0;
	int choice;
	int option,op,depo,with;
	cout << "Enter 1 for checking account and 2 for savings account" << endl;
	cin >> option;
	if (option == 1)
	{
		cout << "Please enter your starting balance and annual interest rate" << endl;
		cin >> x;
		cin >> y;
		Checking check(x, y);
		do
		{
			cout << "Enter 1 for deposit" << endl;
			cout << "Enter 2 for withdrawal" << endl;
			cout << "Enter 3 to see statement" << endl;
			cin >> op;
			if (op == 1)
			{
				cout << "Enter deposit amount" << endl;
				cin >> depo;
				check.deposit(depo);
			}
			if (op == 2)
			{
				cout << "Enter amount to be withdrawn" << endl;
				cin >> with;
				check.withdraw(with);
			}
			if (op == 3)
			{
				check.monthlyProc();
			}

			cout << "Press 1 to exit and 2 to make more changes" << endl;
			cin >> choice;
		} while (choice==2);
	}
	else if (option == 2)
	{
		cout << "Please enter your starting balance and annual interest rate" << endl;
		cin >> x;
		cin >> y;
		Savings save(x, y);
		do
		{
			cout << "Enter 1 for deposit" << endl;
			cout << "Enter 2 for withdrawal" << endl;
			cout << "Enter 3 to see statement" << endl;
			cin >> op;
			if (op == 1)
			{
				cout << "Enter deposit amount" << endl;
				cin >> depo;
				save.deposit(depo);
			}
			if (op == 2)
			{
				cout << "Enter amount to be withdrawn" << endl;
				cin >> with;
				save.withdraw(with);
			}
			if (op == 3)
			{
				save.monthlyProc();
			}

			cout << "Press 1 to exit and 2 to make more changes" << endl;
			cin >> choice;
		} while (choice == 2);
	}

	system("pause");
	return 0;
}