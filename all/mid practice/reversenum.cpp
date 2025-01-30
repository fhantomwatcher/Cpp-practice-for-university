#include <iostream>

using namespace std;


int main() {
    int n,right_Num;

    cout<<"enter a number: ";
    cin>>n;

    while(n !=0){
        right_Num=n%10;
        cout<<right_Num;

        n/=10;
    }
    

    
    return 0;
}