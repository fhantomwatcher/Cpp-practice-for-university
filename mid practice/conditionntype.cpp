#include <iostream>

using namespace std;


int main() {
    int a,b,c,maxNum;

    cout<<"enter 3 numbers: "<<endl;
    cin>>a>>b>>c;

    maxNum=a>b?a:b;
    maxNum=a>c?a:c;
    maxNum=b>c?b:c;

    cout<<maxNum<<" is the largest among "<<a<<","<< b<<","<<c<<"!" <<endl;
    

    
    return 0;
}