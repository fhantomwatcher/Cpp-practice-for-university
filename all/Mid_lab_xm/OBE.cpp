#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements (0-9): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        // Check if the number is outside the range 0-9
        while (arr[i] < 0 || arr[i] > 9) {
            cout << "Invalid input! Enter a number between 0 and 9: ";
            cin >> arr[i]; // Re-enter value for the same index
        }
    }

    // Check for palindrome
    bool isPalindrome = true;
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a Palindrome" << endl;
    }

    return 0;
}
