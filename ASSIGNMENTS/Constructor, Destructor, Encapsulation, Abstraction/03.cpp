/* 3)  Write a C++ program to create a class called Car that has private
		member variables for company, model, and year. Implement member
		functions to get and set these variables. */

#include<iostream>
using namespace std;

class Car
{
	string  Cname,  model;
	int  year;
	
	public:
		
		void get()
		{
			cout << "\n\nPlease Enter Your Company Name :- ";
			cin >> Cname;
			
			cout << "\nEnter Car Model :- ";
			cin >> model;
			
			cout << "\nEnter Car Manufacturing Year :- ";
			cin >> year;
		}
		
		void set()
		{
			cout << "\n\nYour Information :- Company Name :- " << Cname << "\nCar Model :- " << model << "\nManufacturing Year :- " << year;
		}
};

int main()
{
	
	cout << "\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2  Get the Values of these Variables \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
	
	Car obj;
	
	obj.get();
	obj.set();
}