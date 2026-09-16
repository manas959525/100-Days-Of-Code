//Q75: Add two matrices.

#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10], i, j, r, s;

    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &r, &s);

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < s; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < s; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Adding the matrices
    for (i = 0; i < r; i++) {
        for (j = 0; j < s; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("The sum of the two matrices is:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < s; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}