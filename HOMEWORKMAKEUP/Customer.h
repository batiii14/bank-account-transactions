#include <stdio.h>
#include <iostream>
#include "Date.h"
using namespace std;
class Customer {
private:
	static int counter;
	int customer_id;
	string name;
	string address;
	Date birthDate;
	
public:
	Customer(string name,string address,Date birthDate):birthDate(birthDate)
	{
		this->name = name;
		this->address = address;
		this->customer_id = counter;
		counter++;
		
	}

	void print_customer()
	{
		cout << "\nName: " << this->name <<" \nCustomer id: "<<this->customer_id<< "\nAddress: " << this->address << endl;
		birthDate.printDate();
		
	}

	string getName() {
		return this->name;
	}

	string getAddress()
	{
		return this->address;
	}

	int getCustomer_id()
	{
		return this->customer_id;
	}

	void setName(string name)
	{
		this->name = name;
	}

	void setAddress(string address)
	{
		this->address = address;
	}

};

int Customer::counter = 20;