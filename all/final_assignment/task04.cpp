#include <iostream>
using namespace std;

void reverseArray(int* arr, int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
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
    reverseArray(arr, n);
    cout << "Reversed Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
