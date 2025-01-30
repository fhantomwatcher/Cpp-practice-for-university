#include <iostream>

using namespace std;


int main() {
    int year, rem_4,rem_100,rem_400;

    cout<<"Enter a year: ";
    cin>> year;

    rem_4 = year%4;
    rem_100 = year%100;
    rem_400 = year%400;
    
    if((rem_4== 0 && rem_100 != 0) || rem_400== 0){
        cout<< year << " is a leap year:_";
    } else{
        cout<< "The " << year << " is not a leap year!";
    }

    
    return 0;
}