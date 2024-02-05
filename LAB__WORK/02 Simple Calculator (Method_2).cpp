//  simple calculator using class

#include<iostream>
using namespace std;

class calculator{
	int a, b;
	
	public:
	void get()
	{
		cout << "\n\nPlease Enter Value of A :- ";
		cin >> a;
		
		cout << "Please Enter Value of B :- ";
		cin >> b;
	}
	
	void add()
	{
		cout << "\n\nAddition of A and B is :- " << a + b;
	}
	
	void sub()
	{
		cout << "\n\nSubstraction of A and B is :- " << a - b;
	}
	
	void multi()
	{
		cout << "\n\nMultiplication of A and B is :- " << a * b;
	}
	
	void divi()
	{
		cout << "\n\nDivision of A and B is :- " << a / b;
	}
	
	void mod()
	{
		if(b != 0){
				cout << "\n\nModulo of A and B is :- " << a % b;
			}else
			{
				cout << "\n\nModulo is not possible";
			};
	}
	
};


int main()
{
	cout << "\xb2\xb2\xb2\xb2\xb2 Simple Calculator Using Class \xb2\xb2\xb2\xb2\xb2";
	
	calculator obj;
	
	obj.get();
	
	char operation;
	
	cout << "\nSelect Operation Addition (+), Substraction (-), Multiplication (*), Division (/), Modulo (%) :- ";
	cin >> operation;
	
	switch(operation)
			{
				case '+' : obj.add();
				break;
				
				case '-' : obj.sub();
				break;
				
				case '*' : obj.multi();
				break;
				
				case '/' : obj.divi();
				break;
				
				case '%' : obj.mod();
				break;
				
				default : cout << "\n\nPlease Select Valid Operatior";
			}
	
	return 0;
}