#include<iostream>
using namespace std;

class employee{
	int id;
	string name;
	float salary;
	
	public:
		
	void get()
	{
		cout<<"enter id name and salary of employee";
		cin>>id>>name>>salary;
	}
	void display()
	{
		cout<<"name of employee is "<<name<<" id is "<<id<<" and salary is "<<salary;
	}
	
};

int main()
{
	employee e1;
	e1.get();
	e1.display();
	return 0;
}
