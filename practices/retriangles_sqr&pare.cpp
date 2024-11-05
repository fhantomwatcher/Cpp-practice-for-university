#include <iostream>
#include <cmath>

using namespace std;

int main()
{//an rectriangle area and perameter.
    int a,b,area,pare;

    cin>>a;
    cin>>b;

    area=(a*b);
    pare=2*(a+b);

    cout<< "your rectriange's area is "<< area << " And the perameter is "<< pare <<endl;

    return 0;

}