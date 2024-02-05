#include<iostream>
using namespace std;

class A{
	
	public:
		
	void hello()
	{
		cout<<"function of parent class";
	}
};

class B:public A{
	
	public:
		
		void hello1()
	{
		cout<<"function of child class";
	}
};

class C{
	public:
	void hello2()
	{
		cout<<"function of second child class";
	}
};

class D:public B, public C{
	
	public:
		
	void hello3()
	{
		cout<<"function of third child class";
	}
};

int main()
{
	
	D obj;
	obj.hello();
	cout<<endl;
	obj.hello1();
	cout<<endl;
	obj.hello2();
	cout<<endl;
	obj.hello3();
}
