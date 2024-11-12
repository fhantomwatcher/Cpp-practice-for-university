#include <iostream>
using namespace std;

int main(){

    int num,count=0;
    cout<<"enter a big number to count it's digit:-";
    cin>>num;

    if(num==0){
        count=1;
    }
    else{
        if(num<0){
            num=-num;
        }
        while(num>0){
            num/=10;
            count++;
        }
    }

cout<<"digit of the number you enter is "<< count<<endl;
    
    return 0;
}