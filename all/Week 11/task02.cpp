#include <iostream>

using namespace std;
    //   int a[3]={4,7,9};
    //  for (int i=0; i<3; i+=1){
    //     cout<<a[i]<<" "; 
    // }

    // cout<<"Now the opposite array will be printed"<<endl;

    // for(int i=2; i>=0; i-=1){
    //     cout<< a[i]<<" ";
    // }

    void dataArr(int arr[], int size){
        cout<< "enter " << size << " elements"<< endl;
        for(int i; i<size ; i++){
            cin>>arr[i];
        }

    }

    void printArr(int arr[], int size){
        cout<< "Result of the array"<<endl;
        for(int i; i<size ; i++){
        cout<<arr[i]<< " ";
        }
    }

    void reverseArr(int arr[], int size){
        cout<<"Revrse array :"<<endl;
        for(int i= (size-1); i>=0 ; i--){
        cout<<arr[i]<< " ";
        }

    }

    void revArr(int arr[], int size){
        int st= 0;
        int ed = (size-1);
        while(st<ed){
            swap(arr[st],arr[ed]);
            st++;
            ed--;
        }

        for(int i=0; i<size; i++){
            cout<<arr[i]<< " "; 
        }
    }

    void revArr1(int arr[],int size){
        for (int i=size-1;i>=0;i--){
            cout<< *(arr+i);
        }
    }
    // void revArr2(int *arr[],int size){
    //     int *st = &arr;
    //     int *ed = &(size-1);

    //     cout << st<<endl;

    //     cout << *st<<endl;
    // }


int main() {
    int size;
    cout<<"Enter the size: ";
    cin>>size;

    int arr[size];

    dataArr(arr, size);

    // cout<<endl;

    // printArr(arr,size);

    // cout<<endl;

    // reverseArr(arr,size);

    revArr(arr,size);

    cout<<endl;






    
    return 0;
}