#ifndef SalaryEmployee_H
#define SalaryEmployee_H

#include<string>
#include<iostream>
#include<stdio.h>
#include "Employee.h"
#include<string>

class SalaryEmployee:public Employee
{
public:
	SalaryEmployee(const string&,const int&,const float);
	 float getfixedSalary();
	 ~SalaryEmployee();

private:
 const float FixedSalary;
	
};

#endif

