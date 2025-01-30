#include <iostream>

using namespace std;

bool isPllindrom(char arr[],int n){

    for(int i=0; i<n;i++){
        if(arr[i]!=arr[n-i-1]){
            return false;
        }
    }
    return true;
}
bool isAlphabets(char c){
    c=  tolower(c);
    return(c>='a' && c<='z');
}
void inputarray(char arr[],int n){
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
}
void printarray(char arr[],int n){
    cout<<"the array is: "<<endl;
    for(int i=0; i<n;i++){
        cout<<arr[i];
    }
}





int main() {
    int n;
    cout<<"enter array size: ";
    cin>>n;

    char arr[n];
    char alph[n];
    int j=0;

    inputarray(arr,n);
    cout<<endl;
    printarray(arr,n);
    cout<<endl;
    for(int i=0;i<n;i++){
        if(isAlphabets(arr[i])){
            alph[j++]=tolower(arr[i]);
        }
    }
cout<<endl;
for(int i=0; i<j;i++){
    cout<<alph[i];
}
cout<<endl;
    
    if(isPllindrom(alph,j)){
        cout<<"The array is plliandrom"<<endl;
    }else{
        cout<<"not plliandrom!"<<endl;
    }

    
    return 0;
}