#include<iostream>
#include<stdio.h>
#include"Employee.h"
#include<string>
#include"SalaryEmployee.h"
using namespace std;

int main()
{
	
	Employee janitor("Tom Wallingo",21400,2900);
	Employee receptionist("John Poole",21401,5000);
	SalaryEmployee Head_of_EECE("Afullojan Babajide",-21402,1040);
	cout<<"The salary of our janitor:"<<janitor.name()<<" is "<<"R"<<janitor.salary()<<endl;
	cout<<"The salary of our head of EECE "<<Head_of_EECE.name()<<" is "<<Head_of_EECE.getfixedSalary()<<endl;
	cout<<"The staff number of him is:"<<Head_of_EECE.staffNumber()<<endl;

	system("Pause");

	return 0;

}