#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<string>

using namespace std;

class Employee{
	public:
		const string Name;
		const int StaffNumber;

		string name();
		int staffNumber();
		float salary();
		Employee(const string&,const int&,float);
		Employee(const string&,const int&);
		int getEmployeeCount();
		~Employee();
	

	private:
		float Salary;
		static int numberOfEmployees;
};


#endif