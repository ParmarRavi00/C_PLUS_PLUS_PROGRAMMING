/* 5)  Write a C++ program to create a class called Triangle that has private
		member variables for the lengths of its three sides. Implement member
		functions to determine if the triangle is equilateral, isosceles, or scalene.
 */
 
#include<iostream>
using namespace std;

class Triangle {
private:
    int length1, length2, length3;

public:
    // Function to set the lengths of the sides
    void set(int val1, int val2, int val3) {
        length1 = val1;
        length2 = val2;
        length3 = val3;
    }

    // Function to check and display the type of triangle
    void check() {
        if (length1 == length2 && length2 == length3) {
            cout << "\nThis Triangle is Equilateral";
        } else if (length1 == length2 || length2 == length3 || length1 == length3) {
            cout << "\nThis Triangle is Isosceles";
        } else {
            cout << "\nThis Triangle is Scalene";
        }
    }
};

int main() {
    cout << "\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 Triangle is Equilateral, Isosceles, or Scalene. \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";

    Triangle obj;

    int val1, val2, val3;

    cout << "\n\nPlease Enter Length 1: ";
    cin >> val1;

    cout << "Please Enter Length 2: ";
    cin >> val2;

    cout << "Please Enter Length 3: ";
    cin >> val3;

    // Set the values using the set function
    obj.set(val1, val2, val3);

    // Check and display the type of triangle
    obj.check();

    return 0;
}
