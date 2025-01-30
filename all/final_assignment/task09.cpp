#include <iostream>
using namespace std;


int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}


int digitFactorialSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += factorial(n % 10);
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int result = digitFactorialSum(n);
    
    cout << "Sum of Digit Factorials: " << result << endl;

    return 0;
}
