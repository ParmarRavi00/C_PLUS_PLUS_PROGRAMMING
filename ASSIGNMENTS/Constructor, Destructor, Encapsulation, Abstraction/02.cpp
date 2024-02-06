/* 2)  Write a program of Addition, Subtraction, Division, Multiplication using
		constructor. */


#include<iostream>
using namespace std;

class Calculator {
	
    int num1, num2;

public:
    // Constructor
    Calculator(int a, int b) {
        num1 = a;
        num2 = b;
    }

    // Function to perform addition
    void add() {
        cout << "\n\nAddition of Value 1 and Value 2: " << num1 + num2;
    }

    // Function to perform subtraction
    void sub() {
        cout << "\n\nSubtraction of Value 1 and Value 2: " << num1 - num2;
    }

    // Function to perform multiplication
    void multi() {
        cout << "\n\nMultiplication of Value 1 and Value 2: " << num1 * num2;
    }

    // Function to perform division
    void div() {
        if (num2 != 0) {
            cout << "\n\nDivision of Value 1 and Value 2: " << double(num1) / num2;
        } else {
            cout << "\n\nError: Division by zero is undefined.";
        }
    }
};

int main() {
    cout << "\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 Addition, Subtraction, Division, Multiplication using constructor. \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";

    int a, b;

    cout << "\n\nPlease Enter Value 1: ";
    cin >> a;

    cout << "Please Enter Value 2: ";
    cin >> b;

    // Create Calculator object using constructor
    Calculator obj(a, b);

    // Call member functions to perform operations
    obj.add();
    obj.sub();
    obj.multi();
    obj.div();

    return 0;
}
