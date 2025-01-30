#include <iostream>
using namespace std;

void simple_calculator(string expression) {
    int num1, num2;
    char op;
    sscanf(expression.c_str(), "%d %c %d", &num1, &op, &num2);
    switch(op) {
        case '+': cout << "Addition: " << num1 + num2 << endl; break;
        case '-': cout << "Subtraction: " << num1 - num2 << endl; break;
        case '*': cout << "Multiplication: " << num1 * num2 << endl; break;
        case '/': cout << "Division: " << num1 / num2 << endl; break;
        case '%': cout << "Modulus: " << num1 % num2 << endl; break;
        default: cout << "Invalid operator" << endl;
    }
}

void check_leap_year(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }
}

void triangle_type(int a, int b, int c) {
    if (a + b + c == 180) {
        if (a < 90 && b < 90 && c < 90)
            cout << "The triangle is valid and is an acute triangle" << endl;
        else if (a == 90 || b == 90 || c == 90)
            cout << "The triangle is valid and is a right triangle" << endl;
        else
            cout << "The triangle is valid and is an obtuse triangle" << endl;
    } else {
        cout << "The triangle is not valid" << endl;
    }
}

void find_largest(int a, int b, int c) {
    if (a >= b && a >= c)
        cout << a << " is the largest number" << endl;
    else if (b >= a && b >= c)
        cout << b << " is the largest number" << endl;
    else
        cout << c << " is the largest number" << endl;
}

void fibonacci_series(int n) {
    int a = 0, b = 1, next;
    for (int i = 0; i < n; ++i) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

void count_digits(int number) {
    int count = 0;
    while (number > 0) {
        number /= 10;
        count++;
    }
    cout << "Number of digits = " << count << endl;
}

int main() {
    simple_calculator("3 + 5");
    check_leap_year(2020);
    triangle_type(60, 60, 60);
    find_largest(4, 9, 2);
    fibonacci_series(6);
    count_digits(5678);
    return 0;
}
