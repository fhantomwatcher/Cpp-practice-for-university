#include <iostream>

using namespace std;


int main() {
    int x= 0;
    int* ptr= &x;

    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    int n;
    cout<<"enter a number between 2-15 : ";
    cin>>n;

    int *arr = new int [n];

    for(int i=0; i<n; i++){
        cin>>*(arr+i);
    }

    for(int i=0; i<n; i++){
        cout<<*(arr+i)<<" ";
    }

    delete[] arr;
    
    
    return 0;
}