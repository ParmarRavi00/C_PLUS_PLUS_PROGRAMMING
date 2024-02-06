// 6)  Write a C++ Program to show access to Private Public and Protected using Inheritance

#include <iostream>
using namespace std;

// Base class
class Base {
private:
    int privateMember;

protected:
    int protectedMember;

public:
    int publicMember;

    // Constructor
    Base() {
        privateMember = 1;
        protectedMember = 2;
        publicMember = 3;
    }

    // Function to display private, protected, and public members
    void display() {
        cout << "Private member: " << privateMember;
        cout << "Protected member: " << protectedMember;
        cout << "Public member: " << publicMember;
    }
};

// Derived class
class Derived : public Base {
public:
    void accessBaseMembers() {
        // Accessing protected and public members of the base class
        cout << "\nProtected member of Base class accessed from Derived class: " << protectedMember;
        cout << "\n\nPublic member of Base class accessed from Derived class: " << publicMember;

        // Private member cannot be accessed directly from derived class
        // cout << "Private member of Base class accessed from Derived class: " << privateMember << endl;
        // Above line would result in a compilation error
    }
};

int main() {
    // Creating an object of the derived class
    Derived derivedObj;

    // Accessing public member of the base class
    cout << "\n\nPublic member of Base class accessed from Main function: " << derivedObj.publicMember << endl;

    // Accessing protected member of the base class through derived class member function
    derivedObj.accessBaseMembers();

    // Private member cannot be accessed outside the class
    // cout << "Private member of Base class accessed from Main function: " << derivedObj.privateMember << endl;
    // Above line would result in a compilation error

    // Creating an object of the base class
    Base baseObj;

    // Accessing public member of the base class
    cout << "\n\nPublic member of Base class accessed from Main function: " << baseObj.publicMember;

    // Accessing protected member of the base class (accessible within derived class)
    // cout << "Protected member of Base class accessed from Main function: " << baseObj.protectedMember;
    // Above line would result in a compilation error

    // Private member cannot be accessed outside the class
    // cout << "Private member of Base class accessed from Main function: " << baseObj.privateMember;
    // Above line would result in a compilation error

    return 0;
}
