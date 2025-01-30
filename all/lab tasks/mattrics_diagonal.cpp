#include <iostream>

using namespace std;


int main() {
    int n,sump=0, sums=0;
    cout<<"enter n : ";
    cin>>n;

    int matA[n][n], matB[n][n];

    cout<<"enter the values of mattrics"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>> matA[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<< matA[i][j]<<" ";
        }
        cout<<endl;
    }
cout<<endl;

    for(int i=0;i<n;i++){
        sump+=matA[i][i];
        sums+=matA[i][n-i-1];
    }
cout<<endl;

cout<< "primay diagonal of the mattrics is "<< sump <<"!";
cout<<endl;
cout<< "secondary diagonal of the mattrics is "<< sums <<"!";
cout<<endl;


    

    
    return 0;
}