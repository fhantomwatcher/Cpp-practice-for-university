#include <iostream>
using namespace std;

struct Complex {
    double real, imag;
};

void complexOperations() {
    Complex a, b;
    cout << "Enter real and imaginary parts of first complex number: ";
    cin >> a.real >> a.imag;
    cout << "Enter real and imaginary parts of second complex number: ";
    cin >> b.real >> b.imag;

    cout << "Sum: " << (a.real + b.real) << " + " << (a.imag + b.imag) << endl;
    cout << "Difference: " << (a.real - b.real) << " + " << (a.imag - b.imag) << endl;
    cout << "Product: " << (a.real * b.real - a.imag * b.imag) << " + " << (a.real * b.imag + a.imag * b.real) <<endl;
}

int main(){
    complexOperations();

    return 0;
}