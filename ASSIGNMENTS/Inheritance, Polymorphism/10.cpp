// 10)  Write a program to concatenate the two strings using Operator Overloading

#include <iostream>
#include <cstring>
using namespace std;

class MyString {
private:
    char *str;

public:
    MyString() {
        str = nullptr;
    }

    MyString(const char *s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Overloading + operator to concatenate strings
    MyString operator+(const MyString &other) {
        MyString result;
        int len1 = strlen(this->str);
        int len2 = strlen(other.str);
        result.str = new char[len1 + len2 + 1];
        strcpy(result.str, this->str);
        strcat(result.str, other.str);
        return result;
    }

    // Function to display the string
    void display() {
        if (str)
            cout << "Concatenated string: " << str << endl;
        else
            cout << "String is empty." << endl;
    }

    // Destructor to deallocate memory
    ~MyString() {
        delete[] str;
    }
};

int main() {
    MyString str1("Hello, ");
    MyString str2("world!");

    MyString concatenatedString = str1 + str2;

    concatenatedString.display();

    return 0;
}
