// #include <iostream>
// using namespace std;

// void swapUsingAdditionSubtraction(int &a, int &b) {
//     a = a + b; // Step 1: a becomes sum of a and b
//     b = a - b; // Step 2: b becomes original a
//     a = a - b; // Step 3: a becomes original b
// }

// int main() {
//     int x = 10, y = 20;
//     cout << "Before Swap: x = " << x << ", y = " << y << endl;
//     swapUsingAdditionSubtraction(x, y);
//     cout << "After Swap: x = " << x << ", y = " << y << endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;

// void swapUsingMultiplicationDivision(int &a, int &b) {
//     a = a * b; // Step 1: a becomes product of a and b
//     b = a / b; // Step 2: b becomes original a
//     a = a / b; // Step 3: a becomes original b
// }

// int main() {
//     int x = 10, y = 20;
//     cout << "Before Swap: x = " << x << ", y = " << y << endl;
//     swapUsingMultiplicationDivision(x, y);
//     cout << "After Swap: x = " << x << ", y = " << y << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// void swapUsingXOR(int &a, int &b) {
//     a = a ^ b; // Step 1
//     b = a ^ b; // Step 2
//     a = a ^ b; // Step 3
// }

// int main() {
//     int x = 10, y = 20;
//     cout << "Before Swap: x = " << x << ", y = " << y << endl;
//     swapUsingXOR(x, y);
//     cout << "After Swap: x = " << x << ", y = " << y << endl;
//     return 0;
// }



// #include <iostream>
// using namespace std;

// void swap2DArrays(int arr1[][3], int arr2[][3], int rows, int cols) {
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             // Swap corresponding elements
//             arr1[i][j] += arr2[i][j];
//             arr2[i][j] = arr1[i][j] - arr2[i][j];
//             arr1[i][j] -= arr2[i][j];
//         }
//     }
// }

// int main() {
//     int arr1[2][3] = {{1, 2, 3}, {4, 5, 6}};
//     int arr2[2][3] = {{7, 8, 9}, {10, 11, 12}};

//     cout << "Before Swap:\nArray 1:\n";
//     for (auto &row : arr1) {
//         for (auto &val : row)
//             cout << val << " ";
//         cout << endl;
//     }

//     cout << "\nArray 2:\n";
//     for (auto &row : arr2) {
//         for (auto &val : row)
//             cout << val << " ";
//         cout << endl;
//     }

//     swap2DArrays(arr1, arr2, 2, 3);

//     cout << "\nAfter Swap:\nArray 1:\n";
//     for (auto &row : arr1) {
//         for (auto &val : row)
//             cout << val << " ";
//         cout << endl;
//     }

//     cout << "\nArray 2:\n";
//     for (auto &row : arr2) {
//         for (auto &val : row)
//             cout << val << " ";
//         cout << endl;
//     }

//     return 0;
// }



// void swapRows(int arr[][3], int row1, int row2, int cols) {
//     for (int j = 0; j < cols; j++) {
//         // Swap elements in the two rows
//         arr[row1][j] ^= arr[row2][j];
//         arr[row2][j] ^= arr[row1][j];
//         arr[row1][j] ^= arr[row2][j];
//     }
// }



// void swapColumns(int arr[][3], int col1, int col2, int rows) {
//     for (int i = 0; i < rows; i++) {
//         // Swap elements in the two columns
//         arr[i][col1] ^= arr[i][col2];
//         arr[i][col2] ^= arr[i][col1];
//         arr[i][col1] ^= arr[i][col2];
//     }
// }


// void swapElements(int arr[][3], int row1, int col1, int row2, int col2) {
//     arr[row1][col1] ^= arr[row2][col2];
//     arr[row2][col2] ^= arr[row1][col1];
//     arr[row1][col1] ^= arr[row2][col2];
// }


// int main() {
//     int arr[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     cout << "Original Array:\n";
//     for (auto &row : arr) {
//         for (auto &val : row)
//             cout << val << " ";
//         cout << endl;
//     }

//     swapRows(arr, 0, 2, 3); // Swap first and last rows
//     swapColumns(arr, 0, 2, 3); // Swap first and last columns

//     cout << "\nAfter Swapping Rows and Columns:\n";
//     for (auto &row : arr) {
//         for (auto &val : row)
//             cout << val << " ";
//         cout << endl;
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// void swap2DArrays(int **arr1, int **arr2, int rows, int cols) {
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             // Swap elements using pointers
//             *(*(arr1 + i) + j) ^= *(*(arr2 + i) + j);
//             *(*(arr2 + i) + j) ^= *(*(arr1 + i) + j);
//             *(*(arr1 + i) + j) ^= *(*(arr2 + i) + j);
//         }
//     }
// }

// int main() {
//     int arr1[2][3] = {{1, 2, 3}, {4, 5, 6}};
//     int arr2[2][3] = {{7, 8, 9}, {10, 11, 12}};
//     int *ptr1[2] = {arr1[0], arr1[1]};
//     int *ptr2[2] = {arr2[0], arr2[1]};

//     cout << "Before Swap:\nArray 1:\n";
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 3; j++) {
//             cout << arr1[i][j] << " ";
//         }
//         cout << endl;
//     }

//     cout << "\nArray 2:\n";
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 3; j++) {
//             cout << arr2[i][j] << " ";
//         }
//         cout << endl;
//     }

//     swap2DArrays(ptr1, ptr2, 2, 3);

//     cout << "\nAfter Swap:\nArray 1:\n";
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 3; j++) {
//             cout << arr1[i][j] << " ";
//         }
//         cout << endl;
//     }

//     cout << "\nArray 2:\n";
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 3; j++) {
//             cout << arr2[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// void swapRows(int **arr, int row1, int row2) {
//     int *temp = arr[row1];
//     arr[row1] = arr[row2];
//     arr[row2] = temp;
// }

// int main() {
//     int rows = 3, cols = 3;
//     int **arr = new int*[rows];
//     for (int i = 0; i < rows; i++) {
//         arr[i] = new int[cols];
//         for (int j = 0; j < cols; j++) {
//             arr[i][j] = i * cols + j + 1; // Fill array with sequential values
//         }
//     }

//     cout << "Original Array:\n";
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     swapRows(arr, 0, 2); // Swap first and last rows

//     cout << "\nAfter Swapping Rows:\n";
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     // Clean up dynamically allocated memory
//     for (int i = 0; i < rows; i++) {
//         delete[] arr[i];
//     }
//     delete[] arr;

//     return 0;
// }


// void swapElements(int *elem1, int *elem2) {
//     *elem1 ^= *elem2;
//     *elem2 ^= *elem1;
//     *elem1 ^= *elem2;
// }

// int main() {
//     int arr[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     cout << "Original Array:\n";
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     // Swap (0,0) with (2,2)
//     swapElements(&arr[0][0], &arr[2][2]);

//     cout << "\nAfter Swapping Elements (0,0) and (2,2):\n";
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


