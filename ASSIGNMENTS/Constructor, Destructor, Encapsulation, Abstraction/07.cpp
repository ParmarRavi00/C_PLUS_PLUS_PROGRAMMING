/* 7)  Write a C++ program to implement a class called Date that has private
		member variables for day, month, and year. Include member functions to
		set and get these variables, as well as to validate if the date is valid. */
		
#include<iostream>
using namespace std;

class Date
{
	int day, month, year;
	
	public:

	void get()
	{
		cout << "\n\nPlease Enter Day :- ";
		cin >> day;
		
		cout << "Please Enter Month :- ";
		cin >> month;
		
		cout << "Please Enter Year :- ";
		cin >> year;
		
	}
	
};

int main()
{
	cout << "\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 Validate if the date is valid \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
	
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