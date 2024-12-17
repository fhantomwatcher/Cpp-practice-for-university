#include <iostream>

using namespace std;


int main() {
    int f=0,s=1,nxt,n;
    cin>>n;

    for(int i= 1; i<=n;++i){
        cout<<f<<" ";

        nxt= f+s;
        f=s;
        s=nxt;
    }
    

    
    return 0;
}