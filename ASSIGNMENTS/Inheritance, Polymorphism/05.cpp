/* 5)  Assume that the test results of a batch of students are stored in three different
		classes. Class Students are storing the roll number. Class Test stores the
		marks obtained in two subjects and class result contains the total marks
		obtained in the test. The class result can inherit the details of the marks
		obtained in the test and roll number of students. (Multilevel Inheritance)
 */  

#include<iostream>
using namespace std;

class students
{
	protected:
	
	string name;
	int rollNo;
};

class test : public students
{
	protected:
	
	int mark1, mark2;
};

class result : public test
{
	int TotalMarks;
	
	public:
		
	void Get()
	{
		cout << "\n\n\nEnter Studen Name :- ";
		cin >> name;
		
		cout << "\nEnter Student Roll No :- ";
		cin >> rollNo;
		
		cout << "\nEnter Student Marks : ";
		
		cout << "\nMark-1 :- ";
		cin >> mark1;
		
		cout << "Mark-2 :- ";
		cin >> mark2;
	}
	
	void Set()
	{
		cout << "\n\nStudent Name :- " << name;
		
		cout << "\nRoll No :- " << rollNo;
		
		cout << "\nMark-1 :- " << mark1;
		
		cout << "\nMark-2 :- " << mark2;
		
		cout << "\nTotal Marks :- " << mark1 + mark2;
	}
	
};

int main()
{
	
	cout << "\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 Multilevel Inheritance \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
	
	result std;
	
	std.Get();
	std.Set();
	
	return 0;
}