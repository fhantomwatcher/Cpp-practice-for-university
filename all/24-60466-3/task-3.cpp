#include <iostream>
using namespace std;

int getValue(char ch) {
    if (ch == 'I') return 1;
    if (ch == 'V') return 5;
    if (ch == 'X') return 10;
    if (ch == 'L') return 50;
    if (ch == 'C') return 100;
    if (ch == 'D') return 500;
    if (ch == 'M') return 1000;
    return 0;  // For invalid characters
}

int romanToDecimal(char roman[], int length) {
    int result = 0;

    for (int i = 0; i < length; i++) {
        int current = getValue(roman[i]);
        int next = getValue(roman[i + 1]);

        // If the current value is smaller than the next, subtract it
        if (current < next) {
            result -= current;
        } else {
            result += current;
        }
    }

    return result;
}

int main() {
    int n;
    cout << "Enter the length of the Roman numeral: ";
    cin >> n;

    char roman[n];
    cout << "Enter the Roman numeral: ";
    for (int i = 0; i < n; i++) {
        cin >> roman[i];
    }

    int decimal = romanToDecimal(roman, n);
    cout << "The decimal value is: " << decimal << endl;

    return 0;
}
