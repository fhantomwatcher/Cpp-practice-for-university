/*

3. Write a program that takes three angles of a triangle as input. Use conditional statements to determine if the triangle is valid (sum of angles = 180). If valid, check the type of triangle:
- All angles less than 90 degrees: Acute
- One angle equals 90 degrees: Right
- One angle greater than 90 degrees: Obtuse

Example input:
Please enter three sides of a triangle: 60 60 60

Example output:
The triangle is valid and is an acute triangle

*/

#include <iostream>

using namespace std;

void verangle(int x,int y,int z){
    int cal=x+y+z;

  if(cal==180 && (x<90 && y<90 && z<90)){
    cout<<"The triangle is valid and is a Acute treiangle.";
  } else if(cal==180 && (x==90||y==90||z==90)){
    cout<<"The triangle is valid and is a Right treiangle.";
  }else if(cal==180 && (x>90||y>90||z>90)){
    cout<<"The triangle is valid and is a Obtuse treiangle.";
  }else{
    cout<<"there is a invalid angle!";
  }
}


int main() {
    int a,b,c;
    cout<<"Enter three angles for a triangle: ";
    cin>>a>>b>>c;
    verangle(a,b,c);
    
    return 0;
}