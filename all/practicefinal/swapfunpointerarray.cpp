#include <iostream>
using namespace std;

// Function to swap two arrays using array notation
void swapArrays(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}

// Function to swap two arrays using pointers
void swapArraysPointer(int* arr1, int* arr2, int size) {
    for (int i = 0; i < size; i++) {
        int temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp;
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int size;
    cout << "Enter size of the arrays: ";
    cin >> size;

    int arr1[100], arr2[100];
    
    cout << "Enter elements of first array: ";
    for (int i = 0; i < size; i++)
        cin >> arr1[i];

    cout << "Enter elements of second array: ";
    for (int i = 0; i < size; i++)
        cin >> arr2[i];

    cout << "\nBefore swapping:" << endl;
    cout << "Array 1: ";
    printArray(arr1, size);
    cout << "Array 2: ";
    printArray(arr2, size);

    // Swap using array notation
    swapArrays(arr1, arr2, size);

    cout << "\nAfter swapping using array notation:" << endl;
    cout << "Array 1: ";
    printArray(arr1, size);
    cout << "Array 2: ";
    printArray(arr2, size);

    // Swap back using pointer notation
    swapArraysPointer(arr1, arr2, size);

    cout << "\nAfter swapping back using pointer notation:" << endl;
    cout << "Array 1: ";
    printArray(arr1, size);
    cout << "Array 2: ";
    printArray(arr2, size);

    return 0;
}
