// 13)  Write a program to find the max number from given two numbers using friend function

#include <iostream>
using namespace std;

class MaxFinder {
private:
    int num1, num2;

public:
    MaxFinder(int a, int b) {
        num1 = a;
        num2 = b;
    }

    friend int findMax(MaxFinder &);
};

int findMax(MaxFinder &obj) {
    return (obj.num1 > obj.num2) ? obj.num1 : obj.num2;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    MaxFinder obj(num1, num2);

    cout << "Maximum number is: " << findMax(obj);

    return 0;
}
