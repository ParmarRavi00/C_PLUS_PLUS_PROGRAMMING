/* 6)  Write a C++ program to implement a class called Employee that has
		private member variables for name, employee ID, and salary. Include
		member functions to calculate and set salary based on employee
		performance. Using of constructor */
		
#include<iostream>
using namespace std;

class Employee
{
	string name;
	int empId, salary;
	float inc;
	
	public:
		
	Employee(string empName, int id, int sal)
	{
	 	name = empName;
	 	empId = id;
	 	salary = sal;
	}
	
	void set()
	{
		cout << "\nEmployee Name :- " << name;
		cout << "\nId :- " << empId;
		cout << "\nSalary :- " << salary;
	}
	
	void Increment()
	{
		cout << "\n\nEnter Increment :- ";
		cin >> inc;
		
		cout << "\n\nEmployee New Salary :- " << salary + (salary * inc) / 100;
	}
};

int main()
{
	cout << "\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 calculate and set salary based on employee performance. Using of constructor \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
	
	string name;
	int id, salary;
	
	cout << "\n\nEnter Employee Name :- ";
	cin >> name;
	
	cout << "\nEnter Employee Id :- ";
	cin >> id;
	
	cout << "\nEnter Employee Salary :- ";
	cin >> salary;
	
	Employee emp(name, id, salary);
	
	emp.set();
	
	emp.Increment();
	
	return 0;
}