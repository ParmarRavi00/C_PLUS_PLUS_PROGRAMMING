// 1)  Write a program of to swap the two values using template

#include <iostream>
using namespace std;

// Template function to swap two values
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    cout << "Before swapping: x = " << x << ", y = " << y;

    // Swap integers
    swapValues(x, y);

    cout << "\nAfter swapping: x = " << x << ", y = " << y;

    double a = 3.5, b = 7.8;
    cout << "\n\nBefore swapping: a = " << a << ", b = " << b;

    // Swap doubles
    swapValues(a, b);

    cout << "\nAfter swapping: a = " << a << ", b = " << b;

    return 0;
}
