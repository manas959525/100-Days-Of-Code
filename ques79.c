//Q79: Perform diagonal traversal of a matrix.

#include<stdio.h>
void diagonalTraversal(int matrix[3][3], int rows, int cols) {
    for (int d = 0; d < rows + cols - 1; d++) {
        int r = (d < cols) ? 0 : d - cols + 1;
        int c = (d < cols) ? d : cols - 1;
        while (r < rows && c >= 0) {
            printf("%d ", matrix[r][c]);
            r++;
            c--;
        }
    }
}