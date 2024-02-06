/* 8)  Write a program to Mathematic operation like Addition, Subtraction,
		Multiplication, Division Of two number using different parameters and
		Function Overloading */  

#include<iostream>
using namespace std;

class calculation
{
	int choice;
	float a, b;
	
	public:
		
		void get()
	{
		cout << "\n\nPlease Enter Value-1 :- ";
		cin >> a;
		
		cout << "\nPlease Enter Value-2 :- ";
		cin >> b;	
	}
		
	void cho()
	{
		cout << "Please Select Your Operation : 1 for Addition 2 for Substraction 3 for Multiplication 4 for Division :- ";
		cin >> choice;
	
		switch(choice)
	{
		case 1 : add(a, b);
		break;
		
		case 2 : sub(a, b);
		break;
		
		case 3 : mul(a, b);
		break;
		
		case 4 : div(a, b);
		break;
		
		default : cout << "Please Select Valid Operation.";
	}
	}
	
	void add(int a, int b)
	{
		cout << "\nAddition of Value-1 and Value-2 :- " << a + b;	
	}
	
	void add(float a, float b)
	{
		cout << "\nAddition of Value-1 and Value-2 :- " << a + b;	
	}
	
	void sub(int a, int b)
	{
		cout << "\nSubstraction of Value-1 and Value-2 :- " << a - b;	
	}
	
	void sub(float a, float b)
	{
		cout << "\nSubstraction of Value-1 and Value-2 :- " << a - b;	
	}
	
	void mul(int a, int b)
	{
		cout << "\nMultiplication of Value-1 and Value-2 :- " << a * b;	
	}
	
	void mul(float a, float b)
	{
		cout << "\nMultiplication of Value-1 and Value-2 :- " << a * b;	
	}
	
	void div(int a, int b)
	{
		cout << "\nDivision of Value-1 and Value-2 :- " << a / b;	
	}
	
	void div(float a, float b)
	{
		cout << "\nDivision of Value-1 and Value-2 :- " << a / b;	
	}	
};

int main()
{
	
	cout << "\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 Function Overloading \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
	
	calculation obj;
	
	obj.get();
	obj.cho();
	
	
	return 0;
}