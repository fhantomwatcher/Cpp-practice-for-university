#include<iostream>

using namespace std;

int main()
{
int a,b,c;

cout<<"please enter three number :- ";
cin>>a>>b>>c;
cout<<"you enter "<<a<<" "<<b<<" "<<c<<endl;

if(a>b){
    if(a>c){
        cout<< a << " is gratest among them!"<<endl;
           }
    else{
      cout<< c << " is greater among them!"<<endl;
        }
}
else {
    if(b>c){
        cout<< b << " is greatest among them!"<<endl;
           }
    else{
        cout<< c << " is greatest among them!";
    }    
}



 return 0;
}