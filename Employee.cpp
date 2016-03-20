#include<iostream>
#include<stdio.h>
#include<string>
#include "Employee.h"
#include<exception>
using namespace std;


Employee::Employee(const string &n,const int &s,float Salarys):Name(n),StaffNumber(s)
{
	Salary=Salarys;
	numberOfEmployees++;
}


Employee::Employee(const string &n,const int &s):Name(n),StaffNumber(s)
{
	numberOfEmployees++;
}

Employee::~Employee()
{
	cout<<"Employee "<<Name<<" has been been removed"<<endl;

}

int Employee::numberOfEmployees=0;

float Employee::salary()
{
	return Salary;
}

int Employee::getEmployeeCount()
{
	return numberOfEmployees;
}

int Employee::staffNumber()
{
	if(StaffNumber<0)
	{
	throw invalid_argument("Staff Number is invalid");
	Employee::~Employee();
	return -1;
	}

	return StaffNumber;
}

string Employee::name()
{
	return Name;
}