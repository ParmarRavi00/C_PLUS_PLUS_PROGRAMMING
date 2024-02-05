#include<iostream>
using namespace std;

class A{
	
	public:
		
	void hello()
	{
		cout<<"function of parent class";
	}
};

class B{
	
	public:
		
	void hello1()
	{
		cout<<"function of child class";
	}
};

class C:public A, public B{
	
	public:
		
	void hello2()
	{
		cout<<"function of second child class";
	}
};

int main()
{
	
	C obj;
	obj.hello();
	cout<<endl;
	obj.hello1();
	cout<<endl;
	obj.hello2();
	
	return 0;
}
