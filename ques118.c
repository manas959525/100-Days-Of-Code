//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

#include<stdio.h>
int main() {
    int n, i, sum = 0, total_sum;
    
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);
    
    int arr[n-1]; // Array of size n-1 since one number is missing
    
    printf("Enter %d integers between 0 to %d (excluding one number):\n", n-1, n);
    for(i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Calculate the sum of the input numbers
    }
    
    total_sum = (n * (n - 1)) / 2; // Sum of first n-1 integers
    int missing_number = total_sum - sum; // Find the missing number
    
    printf("The missing number is: %d\n", missing_number);
    
    return 0;
}s