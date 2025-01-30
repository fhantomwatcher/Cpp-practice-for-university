#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Points to the first element of the array

    // Accessing array elements using the pointer
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << " = " << *(ptr + i) << endl;
    }

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int (*ptr)[3] = arr; // Pointer to an array of 3 integers

    // Accessing elements using the pointer
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Element at [" << i << "][" << j << "] = " << *(*(ptr + i) + j) << endl;
        }
    }

    return 0;
}


