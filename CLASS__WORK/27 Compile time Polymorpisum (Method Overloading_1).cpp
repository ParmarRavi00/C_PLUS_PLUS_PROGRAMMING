#include<iostream>
using namespace std;

/*
	Method Overloading: It is having 
	
	- different return-type
	- Same Function Name
	- different parameters/arguments.
	
	return-type function-name()
	{
		
	}



*/


class MODemo{
	public:
		
		void common()
		{
			int a = 5,b=9;
			cout<<"\nAddition is "<<(a+b);
		}
		
		void common(int a)
		{
			if(a%2==0)
			{
				cout<<"\nIt is Even.";
			}
			else
			{
				cout<<"\nIt is Odd.";
			}
			
		}
		
		void common(int a, int b)
		{
			cout<<"\nMultiplication is "<<(a*b);
		}
		
};


int main()
{
	MODemo md;
	md.common();
	md.common(5);
	md.common(54,78);
	return 0;
}