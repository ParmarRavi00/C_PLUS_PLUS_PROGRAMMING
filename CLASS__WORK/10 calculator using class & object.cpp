#include<iostream>
using namespace std;
class calculator{
	int no1,no2,result;
	public:
	char ope;
	public:
		void menu()
		{
			cout<<"----------welcome to the calculator----------"<<endl;
			cout<<"enter + for addition \nenter- for subtraction\nenter * for multiplication \n enter / for division"<<endl;
		}
		void ope_get()
		{
			cout<<"enter your choice";
			cin>>ope;
		}
		void value_get()
		{
			cout<<"enter number 1 and number 2";
			cin>>no1>>no2;
		}
		int add()
		{
			return no1+no2;
		}
		int sub()
		{
			return no1-no2;
		}
	
};
int main()
{
	calculator obj;
	obj.menu();
	obj.ope_get();
	switch(obj.ope)
	{
		case '+':
			obj.value_get();
			cout<<"addition is "<<obj.add();
				break;
		case '-':	
			obj.value_get();
			cout<<"subtraction is "	<<obj.sub();
		default:
		cout<<"invalid choice";
		break;	
	}
	
	
	return 0;
}
