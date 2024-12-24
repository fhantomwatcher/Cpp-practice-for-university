/*

4. Write a program that takes three integers as input and prints the largest among them using nested if-else statements.

Example input:
Please enter three integers: 4 9 2

Example output:
9 is the largest number

*/

#include <iostream>

using namespace std;

void compares(int x,int y,int z){
    if(x>y){
    if(x>z){
        cout<< x << " is gratest among them!"<<endl;
           }
    else{
      cout<< z << " is greater among them!"<<endl;
        }
}
else {
    if(y>z){
        cout<< y << " is greatest among them!"<<endl;
           }
    else{
        cout<< z << " is greatest among them!";
    }    
}
}



int main() {
    int a,b,c;

    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    compares(a,b,c);
    

    
    return 0;
}
