/* 3)  Create a class person having members name and age. Derive a class student
		having member percentage. Derive another class teacher having member
		salary. Write necessary member function to initialize, read and write data.
		Write also Main function (Multiple Inheritance)
 */  

#include<iostream>
using namespace std;

class person
{
	protected:
	
	string name;	
	int age;
};

class student
{
	protected:
	
	int percentage;
};

class teacher : public person, public student
{
	int salary;
	
	public:
		
	void TeacherGet()
	{
		cout << "\n\n\nEnter Teacher Name :- ";
		cin >> name;
		
		cout << "\nEnter Teacher Age :- ";
		cin >> age;
		
		cout << "\nEnter Teacher Salary :- ";
		cin >> salary;
	}
	
	void TeacherSet()
	{
		cout << "\n\nTeacher Name :- " << name;
		
		cout << "\nAge :- " << age;
		
		cout << "\nSalary :- " << salary;
	}
	
	void StudentGet()
	{
		cout << "\n\nEnter Student Name :- ";
		cin >> name;
		
		cout << "\nEnter Student Age :- ";
		cin >> age;
		
		cout << "\nEnter Student Percentage :- ";
		cin >> percentage;
	}
	
	void StudentSet()
	{
		cout << "\n\nStudent Name :- " << name;
		
		cout << "\nAge :- " << age;
		
		cout << "\nPercentage :- " << percentage;
	}
};

int main()
{
	
	cout << "\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 Multiple Inheritance \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
	
	teacher per;
	
	per.TeacherGet();
	per.TeacherSet();
	
	per.StudentGet();
	per.StudentSet();
	
	return 0;
}