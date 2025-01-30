#include <iostream>

using namespace std;


int main() {
    //int a[3]={4,7,9};
  /*  for (int i=0; i<3; i+=1){
        cout<<a[i]<<endl; 
    }

    cout<<"Now the opposite array will be printed"<<endl;

    for(int i=2; i>=0; i-=1){
        cout<< a[i]<<endl;
    }*/
   int n;
   int max_num;
   int min_num;
   cin>>n;

   int a[n];

   for(int i =0; i<n; i++){
       cin>>a[i];
   }

    for(int i =(n-1); i>=0; i--){
       cout<<a[i]<<" ";
   }   
  cout<<endl;
   max_num=min_num=a[0];
   

   for (int i=0; i<n; i++){
    if (max_num<a[i]){
        max_num=a[i];
    }
   }

   cout<< "Max number:- "<< max_num<<endl;
    
   for (int i=0; i<n; i++){
    if (min_num>a[i]){
        min_num=a[i];
    }
   }

   cout<< "Min number:- "<< min_num<<endl;

   int m=(n+1)/2;

   cout<< "medain: "<< a[(m-1)]<< endl; 

   int sum=0;

   for (int i =0; i < n; i++){
    sum+=a[i];
   }

   cout<< "Sum: "<<sum<<endl;

    return 0;
}