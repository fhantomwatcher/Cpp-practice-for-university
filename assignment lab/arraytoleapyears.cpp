#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    int years[size];
    int leapYearCount = 0;

    cout << "Enter 5 years: ";
    for (int i = 0; i < size; i++) {
        cin >> years[i];
        // Check leap year directly
        if ((years[i] % 4 == 0 && years[i] % 100 != 0) || (years[i] % 400 == 0)) {
            leapYearCount++;
        }
    }
    if(leapYearCount>0){
    cout << "There are " << leapYearCount << " leap years present in the array." << endl;
    }
    else{
        cout << "There is no leap Year available in the array.";
    }
    return 0;
}
