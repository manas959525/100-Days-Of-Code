//Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

#include<stdio.h>
int main()
{
    int n, x, sum1 = 0, sum2 = 0;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for (x = 1; x <= n; x++) {
        sum1 += x; // Sum of elements from 1 to x
        sum2 = (n * (n + 1)) / 2 - sum1; // Sum of elements from x to n

        if (sum1 == sum2) {
            printf("The pivot integer is: %d\n", x);
            return 0;
        }
    }

    printf("-1\n"); // No pivot integer found
    return 0;
}