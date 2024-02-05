#include<iostream>
using namespace std;

class student{
	public:			//access specifier :-  public, private, protected
	int roll_no;//data member
	string name;
	
	void msg()//member function  / method
	{
		cout<<"hello msg function";
	}
};

int main()
{
	student s1;
	s1.msg();
	s1.name="xyz";
	cout<<s1.name;
	
	return 0;
}
//no return no parameter
//with return no parameter
//no return with paramter
//with return with paramter
