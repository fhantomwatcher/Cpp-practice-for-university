#include <iostream>
using namespace std;

int main() {
    int fbs, firstterm = 0, secondterm = 1, nextTerm = 0;

    cout << "Enter the range number of terms : ";
    cin >> fbs;

    cout << "Fibonacci Series: " << firstterm << ", " << secondterm<<", ";

    for (int i = 3; i <= fbs; ++i) {
        nextTerm = firstterm + secondterm;
        cout << nextTerm << ", ";
        firstterm = secondterm;
        secondterm = nextTerm;
    }
    
    return 0;
}