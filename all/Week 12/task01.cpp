#include <iostream>

using namespace std;

struct student{
    string name;
    int ID;
    int marks[5];
};

void inputDetailes(student students[], int n){
    for(int i=0; i<n;i++){
        cout<<"enter student "<< i+1 << " name ";
        cin>>students[i].name;
        cout<<"enter student "<< i+1 << " ID ";
        cin>>students[i].ID;
        cout<<"please enter the 5 subjects for student "<< i+1<<endl;
        for(int j= 0; j<5; j++){
            cout<<"enter the mark of subject " << j+1<<" ";
            cin>>students[i].marks[j];
        }       
    }

}

void CalruleThreshold(student students[], int n, int threshold){
    cout << "Student scoring above "<< threshold <<" :"<<endl;
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=0; j<5;j++){
            sum+= students[i].marks[j];
        }

        double avg = sum/5 ;
        if(avg >= threshold){
        cout << students[i].name<<endl;
    }
    }

    

}



int main() {
    int n;
    cout<<"enter student number : ";
    cin>>n;

    int th;
    cout<<"enter the thresehold : ";
    cin>>th;

    student students[n];

    inputDetailes(students,n);

    CalruleThreshold(students,n,th);
    

    
    return 0;
}