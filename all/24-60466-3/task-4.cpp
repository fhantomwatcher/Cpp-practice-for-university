#include <iostream>

using namespace std;

struct employee{
    string name;
    int ID,salary[12];
};

void inputDetailes(employee employees[], int n){
    for(int i=0; i<n;i++){
        cout<<"enter employee "<< i+1 << " name ";
        cin>>employees[i].name;
        cout<<"enter employee "<< i+1 << " ID ";
        cin>>employees[i].ID;
        cout<<"please enter the 12 months salary for employee "<< i+1<<endl;
        for(int j= 0; j<5; j++){
            cout<<"enter the salary " << j+1<<" ";
            cin>>employees[i].salary[j];
        }       
    }

}


int totalSalary(employee employees[], int n){
    for(int i=0; i<n;i++){
        int sum=0;
    for(int j= 0; j<n; j++){
            sum+=employees[i].salary[j];
        }
    }
return sum;

}

double averageSalary(int sum){
   int avgsly= sum/12;

    return avgsly;

}

 void displayDetails(employee employees[]; int sum;int avgsly){


 }


int main() {
    int n;
    cout<<"enter employee numbers ";
    cin>>n;
    employee employes[n];
    inputDetailes(employes,n);
    totalSalary(employes,n);







    
    return 0;
}