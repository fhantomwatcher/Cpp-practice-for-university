/*
5. Write a program that uses a for loop to print the first N terms of the Fibonacci series.
Example:
Input: 6
Output: 0 1 1 2 3 5

*/

#include <iostream>

using namespace std;

void fibonacci(int x){
    int f=0,s=1,nxt;
        for(int i= 1; i<=x;++i){
        cout<<f<<" ";

        nxt= f+s;
        f=s;
        s=nxt;
    }
    
}

int main() {
    int n;
    cout<<"enter a rang for fibonacci: ";
    cin>>n;
    fibonacci(n);
    

    
    return 0;
}