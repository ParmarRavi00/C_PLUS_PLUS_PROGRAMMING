//scope resolution operator
//:: operator is called scope resolution operator used for accessing a global variable from a function which is having the same name as the variable declared in the function.

#include<iostream>
using namespace std;

class employee{
	public:
	void display();//dec
};

void employee::display()//def
{
	cout<<"display function";
}

int main()
{
	employee e;
	e.display();
	return 0;
}
