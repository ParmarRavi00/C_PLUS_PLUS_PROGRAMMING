// 7)  Write a C++ Program to illustrates the use of Constructors in multilevel inheritance


#include <iostream>
using namespace std;

// Base class
class Base {
public:
    Base() {
        cout << "Base class constructor called.";
    }
};

// Intermediate derived class
class IntermediateDerived : public Base {
public:
    IntermediateDerived() {
        cout << "\n\nIntermediateDerived class constructor called.";
    }
};

// Derived class
class Derived : public IntermediateDerived {
public:
    Derived() {
        cout << "\n\nDerived class constructor called.";
    }
};

int main() {
    Derived derivedObj;
    return 0;
}
