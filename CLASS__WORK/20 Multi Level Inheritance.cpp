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
			cout<<"Enter B : ";
			cin>>b;	
		}
		
		void putB()
		{
			cout<<"B = "<<b;	
		}	
};

class C : public B
{
	public:
		int c;
		
		void getC()
		{
			cout<<"Enter C : ";
			cin>>c;
		}
		
		void putC()
		{
			cout<<"C = "<<c;
		}
};

int main()
{
	C obj;
	obj.getA();
	obj.getB();
	obj.getC();
	
	obj.putA();
	obj.putB();
	obj.putC();
	return 0;
}