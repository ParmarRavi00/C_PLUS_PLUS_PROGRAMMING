#include<iostream>
using namespace std;

class A{
	public:
	A()
	{
		cout<<"A's Constructor Called.";
	}
};

class B : public A{
	public:
	B()
	{
		cout<<"B's Constructor Called.";
	}
};

class C : public B{
	public:
	C()
	{
		cout<<"C's Constructor Called.";
	}
};


int main()
{
	C obj;
	return 0;
}