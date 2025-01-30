#include <iostream>

using namespace std;


int main() {
    int rw, col;
    cout<<"enter number of rows and coloumbs: ";
    cin>>rw>>col;

    int **arr = new int*[rw];
    for(int i =0; i< rw;i++){
        arr[i] = new int[col];
    }

    cout<< "Enter elements of the array: "<< endl;

    for(int i=0; i< rw;i++){
        for(int j = 0; j<col; j++){
            cin>> *(*(arr+i)+j);
        }
    }
   cout<< " You entered: "<<endl;
    for(int i=0; i< rw;i++){
        for(int j = 0; j<col; j++){
            cout<< *(*(arr+i)+j)<<" ";
        }
        cout<< endl;
    }    

for(int i=0; i<rw; i++){
    delete[] arr[i];
}
delete[] arr;
    
    return 0;
}