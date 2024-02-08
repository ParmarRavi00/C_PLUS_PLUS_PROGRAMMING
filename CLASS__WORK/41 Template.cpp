// Template -- Derived datatype

#include<iostream>
using namespace std;

template <typename T>

T maxNumber(T no1, T no2)
{
	if(no1 > no2)
	{
		return no1;
	}
	else
	{
		return no2;
	}
}

int main()
{
	cout << maxNumber<int>(5,8);
	
	cout << "\n" << maxNumber<float>(5.3,9.4);
	
	cout << "\n" << maxNumber<char>('p', 'r');
	
	return 0;
}