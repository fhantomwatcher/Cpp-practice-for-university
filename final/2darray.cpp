#include <iostream>

using namespace std;


int main() {
    int n;
    cout<<"enter n : ";
    cin>>n;

    int arr[n][n];/*={
        {1,2,3},{4,5,6},{7,8,9}
    };*/

    cout<<"enter the values of mattrics"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>> arr[i][j];
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
    

    
    return 0;
}