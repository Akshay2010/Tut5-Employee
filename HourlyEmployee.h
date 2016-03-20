#ifndef HourlyEmployee_H
#define HourlyEmployee_H

#include<string>
#include<stdio.h>
#include<iostream>
#include "Employee.h"

class HourlyEmployee:public Employee
{
	HourlyEmployee::HourlyEmployee(const string&,const int&,float);

private:
	int hoursWorked;
	int hourlyRate;


};

#endif