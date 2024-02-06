// 9)  Write a Program of Two 1D Matrix Addition using Operator Overloading

#include <iostream>
using namespace std;

class Matrix {
private:
    int size;
    int *data;

public:
    Matrix(int s) : size(s) {
        data = new int[size];
    }

    // Overloading + operator to perform matrix addition
    Matrix operator+(const Matrix &other) {
        Matrix result(size);

        for (int i = 0; i < size; ++i) {
            result.data[i] = this->data[i] + other.data[i];
        }

        return result;
    }

    // Function to input elements into the matrix
    void inputMatrix() {
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; ++i) {
            cin >> data[i];
        }
    }

    // Function to display the elements of the matrix
    void displayMatrix() {
        cout << "Matrix elements: ";
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    // Destructor to deallocate memory
    ~Matrix() {
        delete[] data;
    }
};

int main() {
    int size;
    cout << "Enter the size of the matrices: ";
    cin >> size;

    Matrix matrix1(size), matrix2(size), result(size);

    cout << "Enter elements for matrix 1:" << endl;
    matrix1.inputMatrix();

    cout << "Enter elements for matrix 2:" << endl;
    matrix2.inputMatrix();

    result = matrix1 + matrix2;

    cout << "Resultant matrix after addition:" << endl;
    result.displayMatrix();

    return 0;
}
