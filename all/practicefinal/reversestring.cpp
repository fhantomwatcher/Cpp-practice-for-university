#include <iostream>
using namespace std;

// Function to reverse the string in the character array
void reverseString(char* str) {
    int length = 0;
    while (str[length] != '\0')  // Calculate string length
        length++;

    // Reverse the string using two-pointer approach
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);  // Read string input including spaces

    reverseString(str);

    cout << "Reversed string: " << str << endl;

    return 0;
}
