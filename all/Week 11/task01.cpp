#include <iostream>

using namespace std;

void compare(int *ptr1, int *ptr2){
    if(*ptr1>*ptr2){
        cout<< *ptr1<<endl;

    } else if(*ptr1 == *ptr2){
        cout<<"Both are equals"<<endl;
    }else{
        cout<< *ptr2<< endl;
    }
}


int main() {
    int a,b;
    cout<<"enter two numbers: ";
    cin>>a>>b;

    int *px = &a;
    int *py= &b;

compare(px,py);
    

    
    return 0;
}