#include <iostream>
#include <cstring>
using namespace std;

int larger_number(int* x, int* y) {
    return (*x > *y) ? *x : *y;
}

void reverse_array(int* arr, int size) {
    int* start = arr;
    int* end = arr + size - 1;
    while (start < end) {
        swap(*start, *end);
        start++;
        end--;
    }
}

void dynamic_array_average(int size) {
    int* arr = new int[size];
    cout << "Enter elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    cout << "Average = " << (double)sum / size << endl;
    delete[] arr;
}

int string_length(const char* str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

bool compare_strings(const char* str1, const char* str2) {
    while (*str1 && *str2) {
        if (*str1 != *str2)
            return false;
        str1++;
        str2++;
    }
    return (*str1 == *str2);
}

void add(int a, int b) { cout << "Result: " << a + b << endl; }
void subtract(int a, int b) { cout << "Result: " << a - b << endl; }

bool is_prime(int* num) {
    if (*num < 2) return false;
    for (int i = 2; i * i <= *num; i++) {
        if (*num % i == 0) return false;
    }
    return true;
}

void print_primes(int* arr, int size) {
    cout << "Prime numbers in the array: ";
    for (int i = 0; i < size; ++i) {
        if (is_prime(&arr[i])) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

void transpose_matrix(int* matrix, int rows, int cols) {
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            cout << *(matrix + j * cols + i) << " ";
        }
        cout << endl;
    }
}

int main() {
    int x = 15, y = 20;
    cout << "Larger number: " << larger_number(&x, &y) << endl;

    int arr[] = {1, 2, 3, 4, 5};
    reverse_array(arr, 5);
    cout << "Reversed array: ";
    for (int i : arr) cout << i << " ";
    cout << endl;

    dynamic_array_average(3);

    char str[] = "Hello";
    cout << "Length = " << string_length(str) << endl;

    cout << (compare_strings("apple", "apples") ? "Strings are equal" : "Strings are not equal") << endl;

    void (*operation)(int, int) = add;
    operation(7, 3);

    int numbers[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    print_primes(numbers, 10);

    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    transpose_matrix((int*)matrix, 2, 3);

    return 0;
}
