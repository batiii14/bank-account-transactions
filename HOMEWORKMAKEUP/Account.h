#include "Branch.h"
#include "Customer.h"
using namespace std;
#include <stdio.h>
#include <iostream>
class Account : protected Branch{
private:
	static int counter;
	int account_number;
	Customer customer;
	double balance;
public:
	Account(double balance,Customer customer):customer(customer)
	{
		this->balance = balance;
		this->account_number = counter;
		counter++;

	}
	
	void print_account_info()
	{
		customer.print_customer();
		print_branch_info();
		cout << "Account Number: " << this->account_number << endl;
		cout<<"Current Balance: " << this->balance << endl;

		

	}

	~Account()
	{
		cout << "The account belong to "<<customer.getName()<<" has been deleted" << endl;
	}

	static int getCounter() {
		return counter;
	}

	int getAccount_number() {
		return this->account_number;
	}

	double getBalance() {
		return this->balance;
	}

	void setAccount_number(int account_number)
	{
		this->account_number = account_number;
	}

	void setBalance(double balance)
	{
		this->balance = balance;
	}

	friend void change_balance(Account&);
	
	
};
int Account::counter = 10000;

void change_balance(Account &account) {
	int whichOne;
	double amount;
	cout << "\n\nChange Account balance for " << account.customer.getName()<<endl;
	cout << ">>If you want to Withdraw from the account, please enter 1." << endl;
	cout << ">>If you want to Deposit to the account,please enter 2." << endl;
	cout << ">>To exit enter any value except 1 and 2." << endl;
	cout << "Enter your choice (1/2): ";
	cin >> whichOne;

	if (whichOne == 1) {
		cout << "Enter the amount you want to withdraw: ";
		cin >> amount;
		if (account.balance<10) {
			cout << "Balance is less than 10.Withdraw process can not be done";

		}
		else {
			if (amount > account.balance) {
				cout << "Insufficient balance" << endl;
				change_balance(account);

			}
			else
			{
				account.balance = account.balance - amount;
				cout << "Withdraw process is done." << endl;

			}
		}
		

			

	}
	else if (whichOne == 2)
	{
		cout << "Please enter the amount you want to Deposit"<<endl;
		cin >> amount;
		 account.balance += amount;

	}
	else
	{
		cout << "Now exiting..." << endl;
		exit(1);
	}

}