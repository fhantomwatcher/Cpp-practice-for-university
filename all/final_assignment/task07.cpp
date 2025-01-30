#include <iostream>
using namespace std;

void checkCubeNumber() {
    int n, sum = 0, temp;
    cout << "Enter an integer number: ";
    cin >> n;
    temp = n;
    while (temp) {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    if (sum == n)
        cout << n << " is a Cube Number."<<endl;
    else
        cout << n << " is not a Cube Number."<<endl;
}

int main() {
    checkCubeNumber();
    return 0;
}
