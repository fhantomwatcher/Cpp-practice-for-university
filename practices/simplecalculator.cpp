#include <iostream>

using namespace std;

int main()
{
    int a,b,cal;
    char op;
    string result_type;

    //user input.

    cout << "please enter first number :-";
    cin>>a;

    cout << "please enter a op [+,-,*,/ and %] :-";
    cin>>op;

    cout << "please enter second number :-";
    cin>>b;
    
    //calculation condition.

    if (op =='+'){
        cal= a+b;
        result_type= "addition";
    }
    else if(op =='-'){
        cal=a-b;
        result_type= "substaraction";
    }

    else if(op=='*'){
        cal=a*b;
        result_type= "Multiplication";
    }
    else if(op=='/'){
        cal=a/b;
        result_type= "Divition";
    }
    else if(op=='%'){
        cal=a%b;
        result_type= "Mod";
    }
    else{
        cout<<"Invalid oparaton!"<<endl;
    }       
 //output result.
  
  cout<< "final result: "<<cal<<" ["<<result_type<<"]"<<endl;

    return 0;
}