#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the length of the string: ";
    cin >> n;

    char arr[n];
    cout << "Enter the string: ";
    cin >> arr;

    bool isPalindrome = true;  // Assume the string is a palindrome

    int start = 0, end = n - 1;

    while (start < end) {
        // Skip non-alphabet characters
        if ((arr[start] < 'A' || (arr[start] > 'Z' && arr[start] < 'a') || arr[start] > 'z')) {
            start++;
        } else if ((arr[end] < 'A' || (arr[end] > 'Z' && arr[end] < 'a') || arr[end] > 'z')) {
            end--;
        } else {
            // Compare characters (case-insensitive)
            if ((arr[start] >= 'A' && arr[start] <= 'Z' && arr[start] + 32 != arr[end]) ||
                (arr[start] >= 'a' && arr[start] <= 'z' && arr[start] != arr[end])) {
                isPalindrome = false;  // If mismatch found, it's not a palindrome
                break;
            }
            start++;
            end--;
        }
    }

    // Output the result
    if (isPalindrome) {
        cout << "The string is a Palindrome!" << endl;
    } else {
        cout << "The string is not a Palindrome!" << endl;
    }

    return 0;
}
