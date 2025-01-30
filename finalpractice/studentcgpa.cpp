#include <iostream>

using namespace std;

struct student{
    string name,depertment;
    int stdId;
    double waiver,avgGrade, semGrade[5];
};

int main() {
    int sn;
    cout<<"Enter Student numbers of the class: ";
    cin>>sn;

    student students[sn];

    for(int i=0; i<sn; ++i){
        cout<<"Enter the details for the student "<<i+1<<" : "<<endl;
        cout<<"Name: ";
        cin>>students[i].name;
        cout<<"ID: ";
        cin>>students[i].stdId;
        cout<<"Name of Depertment: ";
        cin>>students[i].depertment;
        cout<<"Waiver%: ";
        cin>>students[i].waiver;
        double totalgread=0;
        cout<<"Enter cgps: "<<endl;
        for(int j=0; j<5;j++){
            cin>>students[i].semGrade[j];
            totalgread+=students[i].semGrade[j];
        }
        students[i].avgGrade =(totalgread/5);
    }

    for(int i=0; i<sn;i++){
        cout<<"Student "<<i+1<<" Report: "<<endl;
        cout<<"Name: "<<students[i].name<<endl;
        cout<<"Name of depertment: "<<students[i].depertment<<endl;
        cout<<"ID: "<<students[i].stdId<<endl;
        cout<<"Grades :"<<endl;
        for(int j=0; j<5;j++){
            cout<<students[i].semGrade[j]<<",";
        }
        cout<<endl;
        cout<<"Average Grade: "<<students[i].avgGrade<<endl;
    }
    

    
    return 0;
}