#include <iostream>
#include "bubbleSort.hpp" // Include the header file for sorting function

using namespace std;

int main() {
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 }; // Array to be sorted
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call the sorting function
    bubbleSort(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
