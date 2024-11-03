#include<iostream>
#include<cmath>

using namespace std;

int main()
{  //stroage for the numbera.
    int a,b,sum;
    string first_name, last_name;
//greeding user acording to userinput
cout<< "please enter your name as first and last name [first name last name] : ";
cin>>first_name;
cin>>last_name;

cout<<"welcome,"<<" "<< first_name << " "<< last_name<< "!" << endl; 


  //inputs and warings for users
    cout<< "Enter your number and 1st is grater then the 2nd!"<< endl;
    cout<< "enter the 1st number : ";
    cin>>a; 
    cout<< "enter the 2nd number : ";
    cin>>b;
  //verify messeages for user
    cout<< "you entered"<< " "<< a <<" "<<"as your 1st number"<< " and "<< b <<" "<<"as your 2nd number!"<< endl;
 //sum culculation
 sum=(a+b);

 cout<<"loading........"<<endl;
 cout<<"and the answar is"<<" "<< sum <<" "<< endl;

    return 0;
}