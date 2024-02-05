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
class C:public A{
	public:
	void hello2()
	{
		cout<<"function of second child class";
	}
};
int main()
{
	C obj;
	B obj1;
	obj.hello();// A class
	cout<<endl;
	obj.hello2();// C class
	cout<<endl;
	obj1.hello1();
	cout<<endl;
	obj1.hello();
	
	
	return 0;
}
