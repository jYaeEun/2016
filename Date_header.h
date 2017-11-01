
//date class
#ifndef _MYDATE_H_
#define _MYDATE_H_
#include <iostream>
using namespace std;
class myDate {
public:
	// Constructor 
	myDate(int year = 1582, int month = 1, int day = 1);
	// Accessor functions 
	int getDayOfMonth() const;
	int getMonth() const;
	int getYear() const;
	// Mutator functions 
	void setDayOfMonth(int day);
	void setMonth(int month);
	void setYear(int year);
	void setDate(int year, int month, int day);
	// utility functions 
	bool isLeapYear() const; 
	int getDayOfWeek() const; //0=Sunday, 1=Monday, ..., 6=Saturday

private:
	int y, m, d;
};
#endif