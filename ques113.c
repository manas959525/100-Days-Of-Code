//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

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
    
    printf("Enter the size of subarray (k): ");
    scanf("%d", &k);
    
    if(k > n) {
        printf("Subarray size k cannot be greater than array size n.\n");
        return 1;
    }
    
    int max_sum = 0;
    for(int i = 0; i < k; i++) {
        max_sum += arr[i];
    }
    
    int current_sum = max_sum;
    
    for(int i = k; i < n; i++) {
        current_sum += arr[i] - arr[i - k];
        if(current_sum > max_sum) {
            max_sum = current_sum;
        }
    }
    
    printf("Maximum sum of all subarrays of size %d is: %d\n", k, max_sum);
    
    return 0;
}