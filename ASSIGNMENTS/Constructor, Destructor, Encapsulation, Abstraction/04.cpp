/* 4)  Define a class to represent a bank account. Include the following members:  */

#include<iostream>
using namespace std;

class bank_account{
	
	int balance, acc_no, amount;
	
	public:
	char operation;
	
	public:
	void get()
	{
		cout << "\n\nEnter Your 12-Digit Account Number :- ";
		cin >> acc_no;
	
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
		
		cout << "\nYour Account Number :- " << acc_no;
		
		cout << "\nTotal Amount :- " << balance + amount; 
	}
	
	void Debit()
	{	
		cout << "\nYour Account Number :- " << acc_no;
		
		cout << "\nTotal Amount :- " << balance - amount; 
	}
	
};


int main()
{
	char other;
	
	do
	{
		cout << "\n\xb2\xb2\xb2\xb2\xb2 Banking System \xb2\xb2\xb2\xb2\xb2";
	
	bank_account obj;
	
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