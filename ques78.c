//Q78: Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

#define MAX 10

// Function to find the sum of main diagonal elements
int sumOfMainDiagonal(int mat[MAX][MAX], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += mat[i][i];
    }
    return sum;
}

int main() {
    int n, mat[MAX][MAX];

    printf("Enter the size of the square matrix (max %d): ", MAX);
    scanf("%d", &n);

    if (n <= 0 || n > MAX) {
        printf("Invalid size! Please enter a value between 1 and %d.\n", MAX);
        return 1;
    }

    printf("Enter the elements of the matrix (%dx%d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Find and print the sum of main diagonal elements
    printf("Sum of main diagonal elements: %d\n", sumOfMainDiagonal(mat, n));

    return 0;
}