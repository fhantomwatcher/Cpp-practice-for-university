#include <iostream>

using namespace std;

class Parallogram{
    private:
    double hight,length;

    public:
    Parallogram(){
        hight=0.0, length=0.0;
    }
    Parallogram(double h, double l){
        hight=h, length=l;
    }

    void setParameter(double h, double l){
        hight= h, length=l;
    }
    double getArea(){
        double area = hight*length;
        return area;
    }

    void show(){
        cout<<"The area of the paralligram is "<< getArea()<<"."<<endl;
    }
};


int main() {
    double h,l;
    cout<<"enter the hight and length for the parallogram: ";
    cin>>h>>l;

    Parallogram p1;
    Parallogram p2(50,6);

    p1.setParameter(l,h);

    cout<<"Datelis for P1"<<endl;
    p1.getArea();
    p1.show();
    cout<<"Datelis for P2"<<endl;
    p2.getArea();
    p2.show();

    
    return 0;
}