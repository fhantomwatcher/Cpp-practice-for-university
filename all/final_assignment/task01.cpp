#include <iostream>
using namespace std;

const int MAX_SIZE = 10;

double calculateDeterminant(double matrix[MAX_SIZE][MAX_SIZE], int n) {
    if (n == 1)
        return matrix[0][0];
    double det = 0;
    double subMatrix[MAX_SIZE][MAX_SIZE];

    for (int x = 0; x < n; x++) {
        int sub_i = 0;
        for (int i = 1; i < n; i++) {
            int sub_j = 0;
            for (int j = 0; j < n; j++) {
                if (j == x) continue;
                subMatrix[sub_i][sub_j] = matrix[i][j];
                sub_j++;
            }
            sub_i++;
        }
        det += (x % 2 == 0 ? 1 : -1) * matrix[0][x] * calculateDeterminant(subMatrix, n - 1);
    }
    return det;
}


void getCofactor(double matrix[MAX_SIZE][MAX_SIZE], double temp[MAX_SIZE][MAX_SIZE], int p, int q, int n) {
    int i = 0, j = 0;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (row != p && col != q) {
                temp[i][j++] = matrix[row][col];
                if (j == n - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
}


void adjugateMatrix(double matrix[MAX_SIZE][MAX_SIZE], double adj[MAX_SIZE][MAX_SIZE], int n) {
    if (n == 1) {
        adj[0][0] = 1;
        return;
    }

    double temp[MAX_SIZE][MAX_SIZE];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            getCofactor(matrix, temp, i, j, n);
            adj[j][i] = ((i + j) % 2 == 0 ? 1 : -1) * calculateDeterminant(temp, n - 1);
        }
    }
}

void inverseMatrix(double matrix[MAX_SIZE][MAX_SIZE], int n) {
    double det = calculateDeterminant(matrix, n);

    if (det == 0) {
        cout << "Inverse does not exist (determinant is zero)." << endl;
        return;
    }

    double adj[MAX_SIZE][MAX_SIZE];
    adjugateMatrix(matrix, adj, n);

    cout << "Inverse of Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << (adj[i][j] / det) << " ";
        }
        cout << endl;
    }
}

void inputMatrix(double matrix[MAX_SIZE][MAX_SIZE], int n) {
    cout << "Enter the matrix elements row-wise: "<<endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];
}

int main() {
    int n;
    double matrix[MAX_SIZE][MAX_SIZE];

    cout << "Enter the size of the square matrix (max " << MAX_SIZE << "): ";
    cin >> n;

    if (n > MAX_SIZE || n <= 0) {
        cout << "Invalid matrix size."<<endl;
        return 1;
    }

    inputMatrix(matrix, n);
    inverseMatrix(matrix, n);

    return 0;
}
