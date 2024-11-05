#include<iostream>

using namespace std;

int main()
{
  int a,b,c,cal;
  cout<<"enter trinangles angles:- ";
  cin>>a>>b>>c;
  cout<<"you enter angles - "<< a <<" "<< b<<" "<< c <<endl;

  cal=a+b+c;

  if(cal==180 && (a<90 && b<90 && c<90)){
    cout<<"The triangle is valid and is a Acute treiangle.";
  } else if(cal==180 && (a==90||b==90||c==90)){
    cout<<"The triangle is valid and is a Right treiangle.";
  }else if(cal==180 && (a>90||b>90||c>90)){
    cout<<"The triangle is valid and is a Obtuse treiangle.";
  }else{
    cout<<"there is a invalid angle!";
  }



 return 0;
}