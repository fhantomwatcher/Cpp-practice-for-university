#include <iostream>

using namespace std;


int main() {
    int n,revn,last_digit;
    cin>>n;

    while(n>0){
        last_digit=n%10;
        revn=(revn*10)+last_digit;
        n/=10;
    }
    cout<<"the reverse number of "<<n<<" is "<<revn;

    
    return 0;
}