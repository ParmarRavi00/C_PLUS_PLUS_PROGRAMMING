//overloading means same name diffrent task with diffrent types of parameter

// Overloading :- Ek j Name na Multiple function Banava (Pan Tena Parameter no data-type Different hova joy ye ane jo same hoy to First Function ma jetala parameter hoy tena karta bija function ma vadhare / ochha parameter hova joy ye ) 

#include<iostream>
using namespace std;
class employee{
	
	int a,p,q;
	public:
	employee(int x)
	{
		a=x;
		cout<<a;
	}
	employee(){
		cout<<"hello default con.";
	}
	employee(int z,int y)
	{
		p=z;
		q=y;
		cout<<"p and q is"<<p<<q;
	}
	
	
};
int main()
{
	employee obj(5,9);
	employee obj1;
	
	return 0;
}
