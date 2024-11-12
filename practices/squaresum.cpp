#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int N,sum=0,mult;
    cout<<"please enter a range of N number for it's sum:- ";
    cin>>N;

    for(int i=1;i<=N;i++){
        mult=pow(i,2);
        sum=sum+mult;
    }

    cout<<"Sum of squares: "<<sum<<endl;

    
    return 0;
}