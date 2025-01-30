#include <iostream>

using namespace std;


int main() {
    int n;
    cout<<"enter n : ";
    cin>>n;

    int arr[n][n], c[n],v[n], sum=0,sum2=0, x=0;

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
            //sum+= arr[i][j];
            sum+= arr[j][i];   
        }
        c[x] = sum;
        // v[x] = sum2;
        x++;
        cout<<endl;
        cout<< sum << endl;
        sum=0;
        // cout<< endl;
        // cout<< sum2<< endl;
        // sum2=0;

    }

for(int i=0; i<n; i++){
    cout<< c[i]<<" ";
    // cout<< v[i]<<" ";
}



    
    

    
    return 0;
}