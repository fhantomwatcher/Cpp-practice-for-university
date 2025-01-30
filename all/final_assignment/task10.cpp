#include <iostream>
#include <cmath>
using namespace std;

// Function to solve the quadratic equation ax^2 + bx + c = 0
void solveQuadratic(double a, double b, double c) {
    double discriminant = pow(b,2) - 4 * a * c;
    
    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots: " << root1 << ", " << root2 << endl;
    } 
    else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "Root: " << root << endl;
    } 
    else {
        cout << "No real roots."<<endl;
    }
}

int main() {
    double a, b, c;
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "Coefficient 'a' cannot be zero.\n";
        return 1;
    }

    solveQuadratic(a, b, c);

    return 0;
}
