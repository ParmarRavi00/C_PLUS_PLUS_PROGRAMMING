/* 8)  Write a C++ program to create a class called Person that has private
		member variables for name, age and country. Implement member
		functions to set and get the values of these variables. */

#include<iostream>
using namespace std;

class Person 
{
	string name, country;
	int age;
	
	public:
		
		void get()
		{
			cout << "\n\nPlease Enter Your Name :- ";
			cin >> name;
			
			cout << "\nEnter Your Age :- ";
			cin >> age;
			
			cout << "\nEnter Your Country :- ";
			cin >> country;
		}
		
		void set()
		{
			cout << "\n\nYour Information :- Your Good Name is " << name << " and age is " << age << " and your country is " << country;
		}
};

int main()
{
	
	cout << "\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2  Get the Values of these Variables \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
	
	Person obj;
	
	obj.get();
	obj.set();
}