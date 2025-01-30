#include <iostream>

using namespace std;

int **createMatrix(int row, int col){
    int **mat = new int*[row];
    for(int i=0; i<row;i++){
        mat[i]= new int[col];
    }
    return mat;
}

void inputMatData(int **mat, int row,int col){
    cout<<"Enter matrixs elements of "<<(row*col)<<" : "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>mat[i][j];
        }
    }
}
void printMatData(int **mat, int row,int col){
    cout<<"The entered elements of the matrix is: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<mat[i][j]<< " ";
        }
        cout<<endl;
    }
}

void deleteMat(int **mat, int row){
    for(int i=0; i<row;i++){
        delete[] mat[i];
    }
    delete[] mat;
}

bool isSymmetric(int **mat,int row, int col){
    for(int i=0; i<row;i++){
        for(int j=0; j<col; j++){
            if(mat[i][j]!=mat[j][i]){
                return false;
            }
        }
    }
    return true;
}

int main() {
    int row,col;
    cout<<"Enter the row and col for the matrix: ";
    cin>>row>>col;

    int **Matrix = createMatrix(row,col);

    inputMatData(Matrix,row,col);
    printMatData(Matrix,row,col);
    if(isSymmetric(Matrix,row,col)){
        cout<<"Matrix is symmetric";
    } else{
        cout<< "Matrix is !Symmetric";
    }
    deleteMat(Matrix,row);
    return 0;
}