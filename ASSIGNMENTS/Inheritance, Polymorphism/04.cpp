// 4)  Write a C++ Program display Student Mark sheet using Multiple inheritance 

#include<iostream>
using namespace std;

class student
{
	protected:
	
	string name;	
	int rollNo;
};

class marks
{
	protected:
	
	int marks[10], TotalMarks = 0;
};

class markSheet : public student, public marks
{	
	public:
		
		void get()
		{
			cout << "\n\nEnter Student Name :- ";
			cin >> name;
			
			cout << "\nEnter Student Roll No :- ";
			cin >> rollNo;
			
			cout << "\nEnter Student 5 Subject Marks : ";
			
			for(int i=0; i<5; i++)
			{
				cout << "\nMark-" << i+1 << " :- ";
				cin>> marks[i];
			}
		}
		
		
		void set()
		{
			cout << "\n\nStudent Name :- " << name;
			
			cout << "\nRoll No :- " << rollNo;
			
			cout << "\n\n5 - Subject Marks : ";
			
			for(int i=0; i<5; i++)
			{
				cout << "\nMark-" << i+1 << " :- ";
				cout << marks[i];
				
				TotalMarks+=marks[i];
			}
			
			cout << "\nTotal Marks :- " << TotalMarks;
		}
	
};

int main()
{
	
	cout << "\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 Multiple Inheritance \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
	
	markSheet std;
	
	std.get();
	std.set();
	
	return 0;
}