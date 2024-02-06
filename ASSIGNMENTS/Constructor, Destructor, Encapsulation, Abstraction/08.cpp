/* 8)  Write a C++ program to implement a class called Student that has private
		member variables for name, class, roll number, and marks. Include
		member functions to calculate the grade based on the marks and display
		the student's information. Accept address from each student implement
		using of aggregation */

#include <iostream>
#include <string>
using namespace std;

// Class for student's information
class StudentInfo {
private:
    string name;
    string studentClass;
    int rollNumber;
    float marks;

public:
    // Constructor to initialize student information
    StudentInfo(const string &name, const string &studentClass, int rollNumber, float marks)
        : name(name), studentClass(studentClass), rollNumber(rollNumber), marks(marks) {}

    // Function to calculate grade based on marks
    char calculateGrade() {
        if (marks >= 90)
            return 'A';
        else if (marks >= 80)
            return 'B';
        else if (marks >= 70)
            return 'C';
        else if (marks >= 60)
            return 'D';
        else if (marks >= 50)
            return 'E';
        else
            return 'F';
    }

    // Function to display student information
    void displayStudentInfo() {
        cout << "Name: " << name;
        cout << "Class: " << studentClass;
        cout << "Roll Number: " << rollNumber;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade();
    }
};

// Class for Student which aggregates StudentInfo
class Student {
private:
    StudentInfo *info;

public:
    // Constructor to initialize StudentInfo using aggregation
    Student(const string &name, const string &studentClass, int rollNumber, float marks) {
        info = new StudentInfo(name, studentClass, rollNumber, marks);
    }

    // Destructor to deallocate memory
    ~Student() {
        delete info;
    }

    // Function to display student information
    void displayStudentInfo() {
        info->displayStudentInfo();
    }
};

int main() {
    // Creating a student object
    Student student1("John Doe", "10th", 101, 85.5);

    // Displaying student information
    student1.displayStudentInfo();

    return 0;
}
