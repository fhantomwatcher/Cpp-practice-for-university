#include <iostream>

using namespace std;


int main() {
    int arr[]={1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int bakarr[n];

    for(int i=0; i<n; i++){
        bakarr[i] = arr[(n-1)-i];
    }

    for(int i=0; i<n;  i++){
        cout<< bakarr[i]<<" ";
    }
   
    return 0;
}