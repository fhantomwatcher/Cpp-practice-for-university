#include <iostream>

using namespace std;
//basic use of function.
int add(int x, int y){
    return x+y;
}

int main() {
    int a,b, addition;
    
cout<<"enter a value for a : ";
cin>>a;
cout<<"enter a value for b : ";
cin>>b;

addition=add(a,b);

cout<<"the addition resualt of "<<a <<" and "<<b <<" is " << addition<<endl;
    
    return 0;
}