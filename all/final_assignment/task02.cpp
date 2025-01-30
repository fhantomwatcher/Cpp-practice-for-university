#include <iostream>
using namespace std;

struct Date {
    int day, month, year;
};

void checkDate() {
    Date d;
    cout << "Enter date (day month year): ";
    cin >> d.day >> d.month >> d.year;

    int leap = (d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0);
    int daysInMonth[] = {0, 31, 28 + leap, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (d.month >= 1 && d.month <= 12 && d.day >= 1 && d.day <= daysInMonth[d.month])
        cout << "The date is valid."<<endl;
    else
        cout << "The date is invalid."<<endl;
}
int main()
{
    checkDate();
    
    return 0;
}
