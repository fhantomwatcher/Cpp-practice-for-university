#include <iostream>

using namespace std;


int main() {
    int n;
    cout<<"please enter a triangle pattern number:- ";
    cin>>n;


for(int i=n; i>0; i-=2){
    for(int j=0; j<(n-i/2); j++){
        cout<< " ";
    }
    for(int j = 0; j<i; j++){
        cout<<"*";
    }

    cout<<endl;
}
    
    return 0;
}