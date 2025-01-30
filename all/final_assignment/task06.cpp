#include <iostream>
using namespace std;

int* findMax(int* arr, int size) {
    int* maxElement = arr;
    for (int i = 1; i < size; i++)
        if (arr[i] > *maxElement)
            maxElement = &arr[i];
    return maxElement;
}

void inarray(int *arr, int size){
    cout<<"enter the array elements: ";
    for(int i=0; i<size;i++){
        cin>>arr[i];
    }
}


int main() {
    int n;
    cout<<"enter array size: ";
    cin>>n;
    int arr[n];
    inarray(arr,n);
    cout << "Maximum Element: " << *findMax(arr, n) << endl;
    return 0;
}
