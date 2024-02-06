// 12)  Write a program to swap the two numbers using friend function without using third variable

#include <iostream>
using namespace std;

class SwapNumbers {
private:
    int num1, num2;

public:
    SwapNumbers(int a, int b) {
        num1 = a;
        num2 = b;
    }

    friend void swapNumbers(SwapNumbers &);
};

void swapNumbers(SwapNumbers &obj) {
    obj.num1 = obj.num1 + obj.num2;
    obj.num2 = obj.num1 - obj.num2;
    obj.num1 = obj.num1 - obj.num2;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    SwapNumbers obj(num1, num2);

    cout << "Before swapping: ";
    cout << "Number 1: " << num1;
    cout << "Number 2: " << num2;

    swapNumbers(obj);

    cout << "After swapping: ";
    cout << "Number 1: " << num1;
    cout << "Number 2: " << num2;

    return 0;
}
