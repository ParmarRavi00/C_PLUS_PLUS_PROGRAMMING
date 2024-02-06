/* 1)  Write a program to find the multiplication values and the cubic values using
		inline function */
		
#include<iostream>
using namespace std;


inline int Multiplication(int a, int b);

inline int Cube(int a);

int main()
{
	cout << "\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 find the multiplication values and the cubic values using inline function \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
	
	int a, b;
	
	cout << "\n\nPlease Enter Value of A :- ";
	cin >> a;
	
	cout << "Please Enter Value of B :- ";
	cin >> b;
	
	cout << "\n\nMultiplication of value A and B :- " << Multiplication(a, b);
	
	cout << "\n\nCube of Value A :- " << Cube(a);
	
	return 0;
}

int Multiplication(int a, int b)
{
	return a * b;
}

int Cube(int a)
{
	return a * a * a;
}