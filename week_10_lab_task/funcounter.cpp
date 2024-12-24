/*

6. Write a program that takes a positive integer as input and uses a while loop to count the number of digits.
Example:
Input: 5678
Output: Number of digits = 4

*/

#include <iostream>

using namespace std;

void counter(int num){
    int count = 0;
        if (num == 0) {
        count = 1;
    } else {
        num = abs(num); // Convert to positive if negative
        while (num > 0) {
            num /= 10;
            count++;
        }
    }

    cout << "The number of digits is " << count << endl;
}


int main() {
    int n;

    cout<<"Enter a number to count : ";
    cin>>n;

    counter(n);
    

    
    return 0;
}