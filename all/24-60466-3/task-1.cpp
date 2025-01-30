#include <iostream>

using namespace std;

void matrixinput(int mat[][100],int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>mat[i][j];
        }
    }
}
void matrixout(int mat[][100],int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

void chksymmetrymat(int mat[][100], int row,int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(mat[i][j] != mat[j][i]){
                cout<<"The matrix is not symmetry!"<<endl;
                return;
            }
        }
    }
    cout<<"The matrix is symmetry!";
}

int main() {
    int row,col;
    cout<<"Enter row and col : ";
    cin>>row>>col;

    int matA[100][100];

    matrixinput(matA,row,col);
    cout<<endl;
    matrixout(matA,row,col);
    chksymmetrymat(matA,row,col);
    

    
    return 0;
}