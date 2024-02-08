//  Friends Function

#include<iostream>
using namespace std;

class addition{
	public:
		int x;
		
		void get()
		{
			cout << "Enter Value :- ";
			cin >> x;
		}
		
		friend void add_data(addition);
};

void add_data(addition obj)
{
	obj.x += 10;
	cout << obj.x;
}

int main()
{
	addition a1;
	a1.get();
	add_data(a1);
	
	return 0;
}