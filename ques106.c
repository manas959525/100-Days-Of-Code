//Q106: Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.

#include<stdio.h>
#include<stdlib.h>
int main() {
    int n, i, j;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int *arr = (int *)malloc(n * sizeof(int));
    int *nge = (int *)malloc(n * sizeof(int)); // Array to store next greater elements

    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize all elements of nge to -1
    for(i = 0; i < n; i++) {
        nge[i] = -1;
    }

    // Find next greater element for each element
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                nge[i] = arr[j];
                break;
            }
        }
    }

    // Print the next greater elements
    printf("Next greater elements:\n");
    for(i = 0; i < n; i++) {
        printf("%d -> %d\n", arr[i], nge[i]);
    }

    // Free allocated memory
    free(arr);
    free(nge);

    return 0;
}