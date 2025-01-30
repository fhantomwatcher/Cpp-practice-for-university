#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            cout << "Not a Palindrome" << endl;
            return 0; // Exit if a mismatch is found
        }
    }

    cout << "Palindrome" << endl;
    return 0; // Exit indicating a palindrome
}
5