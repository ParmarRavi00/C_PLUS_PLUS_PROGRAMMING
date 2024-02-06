/* 1)  Assume a class cricketer is declared. Declare a derived class batsman from
		cricketer. Data member of batsman. Total runs, Average runs and best
		performance. Member functions input data, calculate average runs, Display
		data. (Single Inheritance) */
		
#include <iostream>
#include <string>
using namespace std;

// Base class: Cricketer
class Cricketer {
protected:
    string name;
    int age;

public:
    // Constructor to initialize name and age
    Cricketer(const string &name, int age) : name(name), age(age) {}

    // Function to input data
    void inputData() {
        cout << "Enter cricketer's name: ";
        cin >> name;
        cout << "Enter cricketer's age: ";
        cin >> age;
    }

    // Function to display data
    void displayData() {
        cout << "Name: " << name;
        cout << "Age: " << age;
    }
};

// Derived class: Batsman
class Batsman : public Cricketer {
private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;

public:
    // Constructor to initialize base class and additional data members
    Batsman(const string &name, int age, int totalRuns, double averageRuns, int bestPerformance)
        : Cricketer(name, age), totalRuns(totalRuns), averageRuns(averageRuns), bestPerformance(bestPerformance) {}

    // Function to input data
    void inputData() {
        Cricketer::inputData();
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter average runs: ";
        cin >> averageRuns;
        cout << "Enter best performance: ";
        cin >> bestPerformance;
    }

    // Function to calculate average runs (optional)
    // Note: This can be calculated in the inputData function itself.
    void calculateAverageRuns() {
        averageRuns = static_cast<double>(totalRuns) / bestPerformance;
    }

    // Function to display data
    void displayData() {
        Cricketer::displayData();
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main() {
    // Creating an object of the derived class Batsman
    Batsman batsman("John Doe", 25, 3500, 45.67, 150);

    // Displaying the data
    batsman.displayData();

    return 0;
}
