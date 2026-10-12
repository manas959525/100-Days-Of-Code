//Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

#include<stdio.h>
int main() {
    int n, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the size of the subarray (k): ");
    scanf("%d", &k);
    
    if(k > n) {
        printf("Subarray size k cannot be greater than array size n.\n");
        return 1;
    }
    
    printf("Maximum elements in each subarray of size %d: ", k);
    
    for(int i = 0; i <= n - k; i++) {
        int max = arr[i];
        for(int j = 1; j < k; j++) {
            if(arr[i + j] > max) {
                max = arr[i + j];
            }
        }
        printf("%d ", max);
    }
    
    printf("\n");
    return 0;
}