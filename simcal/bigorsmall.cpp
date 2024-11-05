#include <iostream>

using namespace std;

int main()
{
    int a,b;
    
    cout<< "enter 2 numbers"<< ":-"<< endl;
    cin >> a >> b;
    cout<< a <<" And "<<b <<endl;

    if (a>b && !(b<=4)){
      cout<< a << " is geater then "<< b <<"!"<<endl;
    } else if (b==0){
      cout<< a << " is value of a and value of b is zero!"<< endl;
    } else if (a<b){
      cout << a << " is less then "<< b << endl;
    } else
       cout << " try again and it's not setuped!";
    

    return 0;
}