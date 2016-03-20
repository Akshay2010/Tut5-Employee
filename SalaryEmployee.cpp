#include<string>
#include<iostream>
#include<stdio.h>
#include "SalaryEmployee.h"
#include<string>
using namespace std;

SalaryEmployee::SalaryEmployee(const string &name ,const int &staff_number,const float s):Employee(name,staff_number),FixedSalary(s){}

float SalaryEmployee::getfixedSalary()
{
	return FixedSalary;
}

SalaryEmployee::~SalaryEmployee(){}