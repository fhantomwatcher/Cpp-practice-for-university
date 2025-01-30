#include <iostream>

using namespace std;


int main() {
 int row, col;
cout<<"Enter row and col number for matrix: ";
cin>> row>>col;


 int** mat = new int *[row];
 for(int i= 0 ; i<row; i++){
       mat [i] = new int [col];
    }

    cout<<"Please enter "<< (row*col) << " intgers as elements: ";

       for(int i=0; i<row; i++){
        for(int j= 0; j<col; j++){
            cin>> mat[i][j];
        }
       }

cout<<"you have entered the following matdatas; "<<endl;
       for(int i=0; i<row; i++){
        for(int j= 0; j<col; j++){
            cout<< mat[i][j]<< " ";
        }
        cout<<endl;
       }

       for(int i=0; i<row; i++){
        delete[] mat[i];
       }

       delete[] mat;

    
    return 0;
}