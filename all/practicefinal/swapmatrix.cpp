#include <iostream>
using namespace std;

// Function to reverse the rows of the 2D character array
void reverse2DArray(char arr[][100], int rows, int cols) {
    for (int i = 0; i < rows / 2; i++) {
        for (int j = 0; j < cols; j++) {
            // Swap row i with row (rows - i - 1)
            char temp = arr[i][j];
            arr[i][j] = arr[rows - i - 1][j];
            arr[rows - i - 1][j] = temp;
        }
    }
}

// Function to display the 2D array
void displayArray(char arr[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    char arr[100][100];
    cout << "Enter the 2D array elements (characters only):\n";
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "\nOriginal Array:\n";
    displayArray(arr, rows, cols);

    reverse2DArray(arr, rows, cols);

    cout << "\nReversed Array:\n";
    displayArray(arr, rows, cols);

    return 0;
}
