/*Make a simple calculator that takes 2 numbers as input. Also, the user gives the operation symbol as input i.e., +,-,*,/,%. Based on the given numbers and symbol print the output.

Example Input:
Please enter the values: 3 + 5

Example output:
Addition: 8
*/
#include <iostream>

using namespace std;

int add(int x, int y){
    return x+y;
}
int substract(int x, int y){
    return x-y;
}
int multiplier(int x, int y){
    return x*y;
}
int divider(int x, int y){
    return x/y;
}
int divReminder(int x, int y){
    return x%y;
}

void output(int result, string result_type){
    cout<< result_type << ": "<< result<< endl;

}

void calculation(int x, int y, char opz){
    if(opz == '+'){
        int result = add(x,y);
        string result_type = "addition";
        output(result, result_type);
    } else if(opz == '-'){
        int result = substract(x,y);
        string result_type = "substration";
        output(result, result_type);
    } else if(opz == '*'){
        int result = multiplier(x,y);
        string result_type = "multiplication";
        output(result, result_type);
    } else if(opz == '/'){
        int result = divider(x,y);
        string result_type = "Divition";
        output(result, result_type);
    } else if(opz == '%'){
        int result = divReminder(x,y);
        string result_type = "Reminder";
        output(result, result_type);
    } else{
        cout<<"invalid";
    }
}






int main() {
    //variables.
    int a,b, outputx;
    char op;
    string result_Type;
//inputs.

cout<<"enter two numbers :- ";
cin>>a>>b;
cout<<"what calculation do you want?[+,-,*,/,%]: ";
cin>>op;

calculation(a,b,op);

    

    
    return 0;
}