#include <iostream>

using namespace std;


int main() {
    int n;
    cout<<"enter n : ";
    cin>>n;

    int dataA[n][n], dataB[n][n], result[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            result[i][j]=0;
        }
    }

    cout<<"enter the values of mattric A"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>> dataA[i][j];
        }
        //cout<<endl;
    }

    cout<<"enter the values of mattric B"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>> dataB[i][j];
        }
        //cout<<endl;
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<< dataA[i][j]<<" ";
        }
        cout<<endl;
    }
cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<< dataB[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
//calculation logic.
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                result[i][j]+= dataA[i][k]*dataB[k][j];
            }
        }
    }
    cout<<"results of maltipication: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<< result[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}