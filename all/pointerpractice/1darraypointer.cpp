#include <iostream>

using namespace std;


int main() {
    int size;
    int arr[size];

    cout<<"enter a number for array size: ";
    cin>>size;

    int* ptr = arr;

    for(int i=0;i<size;i++){
        cin>> *(ptr+i);
    }
    for(int i=0;i<size;i++){
        cout<< *(ptr+i) << " ";
    }
    
    

    
    return 0;
}