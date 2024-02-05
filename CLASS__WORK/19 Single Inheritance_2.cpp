#include<iostream>
using namespace std;

class A{
	//scope
	
	protected:
		
	int a,b;
	
	public:
		
		void get()
		{
			cout<<"enter value for a and b";
			cin>>a>>b;
		}
};

class B:public A{
	public:
		void display()
		{
			cout<<a<<b;
		}
};

int main()
{
	B obj;
	obj.get();
	obj.display();
	return 0;
}
