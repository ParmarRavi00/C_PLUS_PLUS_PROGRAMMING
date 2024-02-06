// Function / Method  Overloading : (Function Overloadinh and Method Overloading 2y ek j thay)

#include<iostream>
using namespace std;

class calculator{
	
	public:
		
		void area(int l, int w)
		{
			cout << l * w;
		}
		
		void area(double r)
		{
			cout << 3.14 * r * r;
		}
		
		void area(int s)
		{
			cout << s * s;
		}
		
		void area(double h, double b)
		{
			cout << 0.5 * h * b;
		}
};


int main()
{
	calculator obj;
	
	int choice;
	
	cout << "1 for Rectangle \n2 for Circle \n3 for square \n4 for Tringle\n\n";
	cin >> choice;
	
	switch(choice)
	{
		case 1 : obj.area(2,5);
		break;
		
		case 2 : obj.area(5.5);
		break;
		
		case 3 : obj.area(5);
		break;
		
		case 4 : obj.area(2.5,8.5);
		break;
		
		default : cout << "Invalid Choice.";
	}
	
	return 0;
}