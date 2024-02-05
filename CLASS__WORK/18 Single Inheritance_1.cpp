#include<iostream>
using namespace std;

class A
{
	public:
		int a;
		
		void getA()
		{
			cout<<"\nEnter A : ";
			cin>>a;	
		}
		
		void putA()
		{
			cout<<"A = "<<a;	
		}	
};

class B : public A
{
	public:
		int b;
		
		void getB()
		{
			cout<<"\n\nEnter B : ";
			cin>>b;	
		}
		
		void putB()
		{
			cout<<"B = "<<b;	
		}	
};

int main()
{	
	B obj2;
	obj2.getA();
	obj2.getB();
	obj2.putA();
	obj2.putB();
	
	return 0;
}