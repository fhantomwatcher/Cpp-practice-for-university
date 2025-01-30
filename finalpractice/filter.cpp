#include <iostream>

using namespace std;

bool isVowel(char c){
    c = tolower(c);
    return (c=='a'|| c=='e'|| c=='i' || c=='o'|| c=='u');
}

void inarray(char arr[],int n){
    cout<<"enter the list of alphabets: ";
    //for (int i= 0; i<n;i++){
        cin.ignore();
        cin.getline(arr,n+1);
    //}
}
void outarray(char arr[],int n){
    cout<<"list: "<<endl;
    for (int i= 0; i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
}


int main() {
    int size;
    cout<<"enter array size: ";
    cin>>size;

    char alph[size];
    char alphfilter[size];
    int j=0;
    
    inarray(alph,size);
    cout<<"array size: "<<size<<endl;
    outarray(alph,size);

    for(int i=0; i<size; i++){
        if(!isVowel(alph[i])){
            alphfilter[j++]=alph[i];
        }
    }

    outarray(alphfilter,size);
   
    return 0;
}