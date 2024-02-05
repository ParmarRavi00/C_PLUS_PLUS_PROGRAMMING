//  Foreach loop in C++

#include<iostream>
using namespace std;

int main()
{
	
	int arr[5] = {10, 20, 30, 40, 50};
	
	cout << "\xb2\xb2\xb2\xb2\xb2 Foreach Loop in C++ \xb2\xb2\xb2\xb2\xb2\n\n";
	
	for(int i : arr)
	{
		cout << i << "\t";
	}
	
	return 0;
}