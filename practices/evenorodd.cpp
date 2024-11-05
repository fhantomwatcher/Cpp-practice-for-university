#include<iostream>
using namespace std;
int main()
{
int a;
cout << "Please enter a number"<< " :-";
cin >> a;
cout<<a<< " you entered!"<<endl;

if(a%2==0){
    cout<< a << " is a even number!";
}
else{
    cout<< a << " is odd number!";
}
return 0;
}