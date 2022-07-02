#include <string>
#include <stdio.h>
#include <iostream>
using namespace std;

class Branch {
private:
	static int counter;
	int branch_id;
	string branch_name;
	string branch_address;
public:
	Branch(string branch_name,string branch_addres)
	{
		this->branch_name = branch_name;
		this->branch_address = branch_address;
		this->branch_id = counter;
		counter++;


	}

	void print_branch_info()
	{
		cout << "\nBranch name: " << this->branch_name <<"\nBranch id: "<<this->branch_id << "\nBranch address: " << this->branch_address << endl;
	}

	Branch()
	{
		cout << "Please enter the Branch Name: "<<endl;
		cin >> this->branch_name;
		cout << "Please enter the Branch Address: " << endl;
		cin >> this->branch_address;
		this->branch_id = counter;
		counter++;
	}

	static int getCounter()
	{
		return counter;
	}

	string getBranch_Name()
	{
		return this->branch_name;
	}

	string getBranch_Address()
	{
		return this->branch_address;
	}

	int getBranch_Id()
	{
		return this->branch_id;
	}

	void setBranch_Name(string branch_name)
	{
		this->branch_name = branch_name;

	}

	void setBranch_Address(string branch_address)
	{
		this->branch_name = branch_address;
	}

	void setBranch_Id(int branch_id)
	{
		this->branch_id = branch_id;
	}
};

int Branch::counter = 20;