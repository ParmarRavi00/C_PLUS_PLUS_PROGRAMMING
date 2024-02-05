#include<iostream>
using namespace std;

/*

	Operator overloading not supported in c++.
	
	1) ?:
	2) ::
	3) sizeof()
	4) .
*/


class Distance{
	public:
		double feet,inches;
		
		Distance(double f, double i)
		{
			feet = f;
			inches = i;	
		}
		
		Distance operator-()
		{
			feet = -feet;
			inches = -inches;
			return Distance(feet,inches);
		}
		
		
		void display()
		{
			cout<<"\nFeet : "<<feet<<"\nInches : "<<inches;	
		}	
		
};

int main()
{
	Distance d1(6,-7);
	-d1;
	d1.display();
	return 0;
}