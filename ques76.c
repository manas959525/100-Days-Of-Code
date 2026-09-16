//Q76: Check if a matrix is symmetric.

#include<stdio.h>
int main() {
    int matrix[10][10], transpose[10][10], row, col, i, j, isSymmetric = 1;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &row, &col);
    if (row != col) {
        printf("Matrix is not symmetric as it is not a square matrix.\n");
        return 0;
    }
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    // Calculate transpose of the matrix
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    // Check if the matrix is symmetric
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (matrix[i][j] != transpose[i][j]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }
    if (isSymmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }
    return 0;
}