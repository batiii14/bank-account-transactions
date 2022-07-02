#include "Account.h"
using namespace std;
#include <iostream>
#include <stdio.h>
void main()
{
	
	{
		Date birthDate(01,02,1998);
		Date birthDate2(02, 05, 1990);
		Date birthDate3(04, 12, 1995);
		Customer customer("BATUN IDIKURT","ADANA",birthDate);
		Customer customer2("ARNOLD KUSHOV", "MOSCOW",birthDate2);
		Customer customer3("YAMAC KOCOVALI", "CUKUR", birthDate3);

		Account account(1000,customer);
		Account* dynAcc = new Account(3000, customer2);
		Account dynArrAcc[1] = {Account(1500,customer3)
		};
		
		
		account.print_account_info();
		account.getBalance();
		change_balance(account);
		cout<<"\n\nBalance after change_balance function: "<<account.getBalance() << endl;
		
		
		cout << "\n\nTHIS IS FOR DYNAMIC OBJECT" << endl;
		dynAcc->print_account_info();
		delete dynAcc;
		
	
		cout << "\n\nTHIS IS FOR DYNAMIC ARRAY OBJECT" << endl;

		 dynArrAcc->print_account_info();
		 
		system("pause");
	}

}