/*2. Write a program that checks if a given year is a leap year or not. A year is a leap year if it is divisible by 4 but not by 100, or if it is divisible by 400.

Example input:
Please enter a year: 2020

Example output:
2020 is a leap year*/

#include <iostream>

using namespace std;

void leapy(int year){
   int rem_4 = year%4;
   int rem_100 = year%100;
   int rem_400 = year%400;
    
    if((rem_4== 0 && rem_100 != 0) || rem_400== 0){
        cout<< year << " is a leap year:)";
    } else{
        cout<< "The " << year << " is not a leap year!";
    }    
    

}

int main() {
    int year;

    cout<<"Enter a year: ";
    cin>>year;
    
leapy(year);
    
    return 0;
}
