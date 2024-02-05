//  5) Define a class to represent a bank account.

#include<iostream>
using namespace std;

class bank{
	
	string name, acc_type;
	int balance, acc_no, amount;
	
	public:
	char operation;
	
	public:
	void get()
	{
		cout << "\n\nPlease Enter Your Name :- ";
		cin >> name;
		
		cout << "\nEnter Your 12-Digit Account Number :- ";
		cin >> acc_no;
		
		cout << "\nEnter Account Type :- ";
		cin >> acc_type;
		
		cout << "\nEnter Balance :- ";
		cin >> balance;
	}
	
	void selectOpe()
	{
		cout << "\n\nPlease Enter Your Operation Credit for C or Debit for D :- ";
		cin >> operation;
		
		cout << "Enter Amount :- ";
		cin >> amount;
	}
	
	void Credit()
	{
		cout << "\n\nAccount Holder Name :- " << name;
		
		cout << "\nYour Account Number :- " << acc_no;
		
		cout << "\nYour Account Type :- " << acc_type;
		
		cout << "\nTotal Amount :- " << balance + amount; 
	}
	
	void Debit()
	{
		cout << "\n\nAccount Holder Name :- " << name;
		
		cout << "\nYour Account Number :- " << acc_no;
		
		cout << "\nYour Account Type :- " << acc_type;
		
		cout << "\nTotal Amount :- " << balance - amount; 
	}
	
};


int main()
{
	char other;
	
	do
	{
		cout << "\n\xb2\xb2\xb2\xb2\xb2 Banking System \xb2\xb2\xb2\xb2\xb2";
	
	bank obj;
	
	obj.get();
	
	obj.selectOpe();
	
	switch(obj.operation)
	{
		case 'C' :
		case 'c' : obj.Credit();
		break;
		
		case 'D' :
		case 'd' : obj.Debit();
		break;
		
		default : "Please Select Valid Oparaion.";
	}
	
	cout << "\n\nDo you want to do any other operation ?\n";
	cin >> other;
	
	}while(other == 'y' || other == 'Y');
	
		cout << "\nThanks Visit Again.";
	
	
	return 0;
}