//Q77: Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>
#include <stdbool.h>

#define MAX 10

// Function to check if diagonal elements are distinct
bool areDiagonalElementsDistinct(int mat[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // If any two diagonal elements are equal, they are not distinct
            if (mat[i][i] == mat[j][j]) {
                return false;
            }
        }
    }
    return true;
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

    // Check and print result
    if (areDiagonalElementsDistinct(mat, n)) {
        printf("All elements on the main diagonal are distinct.\n");
    } else {
        printf("The elements on the main diagonal are NOT distinct.\n");
    }

    return 0;
}