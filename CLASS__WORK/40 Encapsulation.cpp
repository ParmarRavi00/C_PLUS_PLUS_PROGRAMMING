// Encapsulation is a process of binding data and method together.

#include<iostream>
using namespace std;

class area
{
	int height, width;
	
	public:
		
	void result()
	{
		cout << "Enter Height and Width :- ";
		cin >> height >> width;
		
		cout << "Area is " << width * height;
	}
};

int main()
{
	
	area obj;
	
	obj.result();
	
	return 0;
}