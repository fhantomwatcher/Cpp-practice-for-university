#include <iostream>
#include <cmath>

using namespace std;

class Circle{
    private:
    double diameter;

    public:

    Circle(){
        diameter = 0.0;
    }

    Circle(double d){
        diameter = d;
    }

    void setDiameter(double d){
        diameter = d;
    }

    double getDiameter(){
        return diameter;
    }
    double getArea(){
        double radius = diameter/2;
        return 3.1416*pow(radius,2); 
    }
    double getPerametar(){
        return 3.1416*diameter;
    }
    void show(){
        cout<<"the circle with diameter of "<< diameter<<endl;
        cout<<"the area "<< getArea()<<endl;
        cout<<"the perametar " << getPerametar()<<endl;
    }
};


int main() {
    double n,m;
    cout<<"Enter diamete {for c1 and c2}: ";
    cin>>n>>m;
    Circle c1;
    Circle c2(m);

    c1.setDiameter(n);

    cout<<"The diameter of circle 1 is "<<c1.getDiameter()<<endl;
    cout<<"The diameter of circle 2 is "<<c2.getDiameter()<<endl;

    cout<<"Details of circle with diameter of "<<c1.getDiameter()<<endl;
    c1.show();
    cout<<"Details of circle with diameter of "<<c2.getDiameter()<<endl;
    c2.show();
    

    
    return 0;
}