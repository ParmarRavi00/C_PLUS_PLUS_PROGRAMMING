// 2)  Write a program of to sort the array using templates

#include <iostream>
using namespace std;

// Template function to sort an array
template <typename T>
void sortArray(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements if they are in the wrong order
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Template function to display an array
template <typename T>
void displayArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Sorting an array of integers
    int intArray[] = {5, 2, 7, 3, 1};
    int intArraySize = sizeof(intArray) / sizeof(int);
    cout << "Before sorting: ";
    displayArray(intArray, intArraySize);
    sortArray(intArray, intArraySize);
    cout << "After sorting: ";
    displayArray(intArray, intArraySize);

    // Sorting an array of doubles
    double doubleArray[] = {3.5, 1.2, 4.7, 2.3, 0.8};
    int doubleArraySize = sizeof(doubleArray) / sizeof(double);
    cout << "\nBefore sorting: ";
    displayArray(doubleArray, doubleArraySize);
    sortArray(doubleArray, doubleArraySize);
    cout << "After sorting: ";
    displayArray(doubleArray, doubleArraySize);

    // Sorting an array of characters
    char charArray[] = {'e', 'b', 'g', 'c', 'a'};
    int charArraySize = sizeof(charArray) / sizeof(char);
    cout << "\nBefore sorting: ";
    displayArray(charArray, charArraySize);
    sortArray(charArray, charArraySize);
    cout << "After sorting: ";
    displayArray(charArray, charArraySize);

    return 0;
}
