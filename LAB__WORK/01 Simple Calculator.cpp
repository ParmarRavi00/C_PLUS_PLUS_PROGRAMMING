//  simple calculator using class

#include<iostream>
using namespace std;

class calculator{
	int a, b;
	char operation;
	
	public:
	void get()
	{
		cout << "\n\nPlease Enter Value of A :- ";
		cin >> a;
		
		cout << "Please Enter Value of B :- ";
		cin >> b;
		
		cout << "\nSelect Operation Addition (+), Substraction (-), Multiplication (*), Division (/), Modulo (%) :- ";
		cin >> operation;
	}
	
	void set()
	{
			switch(operation)
			{
				case '+' : cout << "\n\nAddition of A and B is :- " << a + b;
				break;
				
				case '-' : cout << "\n\nSubstraction of A and B is :- " << a - b;
				break;
				
				case '*' : cout << "\n\nMultiplication of A and B is :- " << a * b;
				break;
				
				case '/' : cout << "\n\nDivision of A and B is :- " << a / b;
				break;
				
				case '%' : if(b != 0){
								cout << "\n\nModulo of A and B is :- " << a % b;
							}else
							{
								cout << "\n\nModulo is not possible";
							};
				break;
				
				default : cout << "\n\nPlease Select Valid Operatior";
			}
	
	}
	
};


int main()
{
	cout << "\xb2\xb2\xb2\xb2\xb2 Simple Calculator Using Class \xb2\xb2\xb2\xb2\xb2";
	
	calculator obj;
	
	obj.get();
	obj.set();
	
	return 0;
}