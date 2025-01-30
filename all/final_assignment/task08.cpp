#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
void inarray(int *arr, int size){
    cout<<"enter the array elements: ";
    for(int i=0; i<size;i++){
        cin>>arr[i];
    }
}

int main() {
    int n;
    cout<<"enter array size :";
    cin>>n;
    int arr[n];
    inarray(arr,n);
    int g = arr[0],l = arr[0];
    for (int i = 1; i < n; i++) {
        g = gcd(g, arr[i]);
        l = (l * arr[i]) / gcd(l, arr[i]);
    }
    cout << "GCD of array: " << g << endl << "LCM of array: " << l << endl;
    return 0;
}
