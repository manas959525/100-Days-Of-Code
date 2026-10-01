//Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

#include<stdio.h>
int main()
{
    int n, i, leftSum = 0, rightSum = 0, pivotIndex = -1;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Calculate total sum of the array
    for(i = 0; i < n; i++) {
        rightSum += arr[i];
    }
    
    // Find pivot index
    for(i = 0; i < n; i++) {
        rightSum -= arr[i]; // Update right sum by removing current element
        
        if(leftSum == rightSum) {
            pivotIndex = i;
            break; // Found the leftmost pivot index
        }
        
        leftSum += arr[i]; // Update left sum by adding current element
    }
    
    printf("Pivot Index: %d\n", pivotIndex);
    
    return 0;
}