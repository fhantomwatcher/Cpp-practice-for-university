#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    cout << "Enter a number to count its digits: ";
    cin >> num;

    if (num == 0) {
        count = 1;
    } else {
        num = abs(num); // Convert to positive if negative
        while (num > 0) {
            num /= 10;
            count++;
        }
    }

    cout << "The number of digits is " << count << endl;
    return 0;
}
