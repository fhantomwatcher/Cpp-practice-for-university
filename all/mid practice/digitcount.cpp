#include <iostream>

using namespace std;


int main() {
    int num,counter=0;

    cout<<"enter a big number to count digit: ";
    cin>>num;

    while(num>0){
        num/=10;
        counter++;
    }
    cout<<"the number's digit is "<<counter<<endl;

    
    return 0;
}