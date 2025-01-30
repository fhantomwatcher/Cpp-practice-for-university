#include <iostream>
using namespace std;

int main(){
        int a;
        cout<<"enter a number for number table: ";
        cin>>a;
        cout << a <<"'s number table is given below:- "<<endl;

    for(int i=1;i<11;i++){
        cout<<a<<" x "<<i<<" = "<< (a*i)<<endl;
    }
    return 0;
}