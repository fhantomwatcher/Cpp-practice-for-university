#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a range: ";
    cin >> n;

    int arr[n];

    // Input array values
    cout << "Enter array values (numbers between 0 and 9): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        // Validate input to be in the range [0, 9]
        while (arr[i] < 0 || arr[i] > 9) {
            cout << "Invalid! Enter a number between 0 and 9: ";
            cin >> arr[i];
        }
    }

    // Print the original array
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Create the reversed array
    int revarr[n];
    for (int i = 0; i < n; i++) {
        revarr[i] = arr[n - i - 1];
    }

    // Print the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << revarr[i] << " ";
    }
    cout << endl;

    // Check if the array is a palindrome
    bool isPalindrome = true; // Assume it is a palindrome
    for (int i = 0; i < n; i++) {
        if (arr[i] != revarr[i]) {
            isPalindrome = false; // If any mismatch is found, it's not a palindrome
            break;
        }
    }

    // Output the result
    if (isPalindrome) {
        cout << "Palindrome!" << endl;
    } else {
        cout << "!Palindrome" << endl;
    }

    return 0;
}
