#include <iostream>
using namespace std;

int sumArray(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

int main() {
    int size;
    cout << "Size: ";
    cin >> size;
    int* arr = new int[size];

    cout << "Elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Sum: " << sumArray(arr, size) << endl;
    delete[] arr;
    return 0;
}
