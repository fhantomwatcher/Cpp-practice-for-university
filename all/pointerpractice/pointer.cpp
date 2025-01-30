#include <iostream>

using namespace std;


int main() {

    int x=10;
    int *ptr = &x;

    cout<<"memory location: "<< ptr << " and " << &x <<endl;
    cout<<"memory value: "<< *ptr << " and " << x <<endl;
    

    
    return 0;
}