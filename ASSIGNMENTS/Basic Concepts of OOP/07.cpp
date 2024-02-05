#include<iostream>
using namespace std;

class Rectangle
{
	int length, width;
	
	public:
		
		void get()
		{
			cout << "\n\nPlease Enter Length :- ";
			cin >> length;
			
			cout << "\nPlease Enter Width :- ";
			cin >> width;
		}
		
		void area()
		{
			cout << "\nRectangle's Area :- " << length * width;
		}
		
		void perimeter()
		{
			cout << "\nRectangle's Perimeter :- " << 2 * ( length + width );
		}
};

int main()
{
	
	cout << "\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 Calculate the Rectangle's Area and Perimeter \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";

	Rectangle obj;
	
	obj.get();
	obj.area();
	obj.perimeter();
	
	return 0;
}