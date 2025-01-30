#include <iostream>

using namespace std;


int main() {
    int n;
    string *arr= new string [n];
    /*
    int/string/double arr[size]  ==  int/string/double *arr = new int/string/double [size];
    */

    cout<<"enter a list member number: ";
    cin>>n;
    
    cout<<"Please enter "<<n<< " names"<<endl;
    for(int i=0; i<n; i++){
        cin>>*(arr+i);
    }

    cout<<"The list name's you entered:"<<endl;
    for(int i=0; i<n; i++){
        cout<<*(arr+i)<<" ";
    }

    
    return 0;
}