#include <iostream>

using namespace std;


int main() {
    int n,trinum=0;

    cout<<"enter a number: ";
    cin>>n;

    if(n>200)
       cout<<"enter a number between 1-200!";
    else{
    for( ;n<=200; n++){
        trinum=trinum+n;
    }

        cout<< "the 200th trinumber is - "<<trinum<<endl;
    }
    
    return 0;
}