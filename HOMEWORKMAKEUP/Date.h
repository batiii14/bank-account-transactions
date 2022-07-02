using namespace std;
#include <stdio.h>
#include <iostream>
class Date {
 protected:
	int day,month,year;
public:
	Date(int day,int month,int year)
	{
		this->day = day;
		this->month = month;
		this->year = year;


	}

	void setDate(int day,int month,int year)
	{
		this->day = day;
		this->month = month;
		this->year = year;

	}

	~Date()
	{
		cout << "The date information has been deleted.." << endl;
	}

	void printDate()
	{
		cout << "\nDate Of Birth: " << this->day << "-" << this->month << "-" << this->year<<endl;
	}

	void setDay(int day)
	{
		this->day = day;

	}

	void setMonth(int month)
	{
		this->month = month;
	}

	void setYear(int year)
	{
		this->year = year;
	}

	int getDay()
	{
		return this->day;
	}

	int getMonth()
	{
		return this->month;
	}

	int getYear()
	{
		return this->year;
	}


};