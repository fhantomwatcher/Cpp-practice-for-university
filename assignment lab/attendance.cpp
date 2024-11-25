#include <iostream>
using namespace std;

int main() {
    int totalClasses, attendedClasses;
    cout << "Enter the total number of classes held: ";
    cin >> totalClasses;
    cout << "Enter the number of classes attended: ";
    cin >> attendedClasses;

    double attendancePercentage = (double(attendedClasses) / totalClasses) * 100;
    cout << "Attendance percentage = " << attendancePercentage << "%" << endl;

    if (attendancePercentage >= 80) {
        cout << "The student is allowed to sit in the exam." << endl;
    } else {
        cout << "The student is not allowed to sit in the exam." << endl;
    }
    return 0;
}
