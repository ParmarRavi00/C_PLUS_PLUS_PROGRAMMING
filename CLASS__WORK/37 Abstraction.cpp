// Abstraction is used to hide implemation part of code only essential informations display in the program

#include<iostream>
using namespace std;

class employee
{
	int id;
	string name;
	
	public:
		
	void get()
	{
		cout << "Enter Id :- ";
		cin >> id ;
		
		cout << "\nEnter Name :- ";
		cin >> name;
	}
	
	void display()
	{
		cout << id << name;
	}
};

int main()
{
	
	employee obj;
	
	obj.get();
	obj.display();
	
	return 0;
}