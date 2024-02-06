// 2)  Write a C++ Program to find Area of Rectangle using inheritance

#include<iostream>
using namespace std;

class A
{
	protected:
		
	int length, width;
};

class B : public A
{
	public:
		
	void set()
	{
		cout << "\n\nEnter Length :- ";
		cin >> length;
		
		cout << "\nEnter Width :- ";
		cin >> width;
		
		cout << "\n\nArea of Rectangle :- " << length * width;
	}
};

int main()
{
	
	cout << "\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 Find Area of Rectangle using Inheritance \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
	
	B obj;
	
	obj.set();
	
	return 0;
}