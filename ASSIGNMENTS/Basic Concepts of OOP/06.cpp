/*  6) Write a C++ program to implement a class called Circle that has private
		member variables for radius. Include member functions to calculate the
		circle's area and circumference. */

#include<iostream>
using namespace std;

class circle{
	float radius;
	
	public:
		
		void get()
		{
			cout << "\n\nPlease Enter Valuse of Radius :- ";
			cin >> radius;
		}
		
		void area()
		{
			cout << "\n\nArea of Circle :- " << 3.14 * radius * radius;
		}
		
		void circumference()
		{
			cout << "\ncircumference of Circle :- " << 2 * 3.14 * radius;
		}
};

int main()
{
	cout << "\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 Calculate the Circle's Area and Circumference \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
	
	circle obj;
	
	obj.get();
	obj.area();
	obj.circumference();
	
	return 0;
}