//Q115: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

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
    
    printf("First negative integers in each subarray of size %d: ", k);
    
    for(int i = 0; i <= n - k; i++) {
        int foundNegative = 0;
        for(int j = i; j < i + k; j++) {
            if(arr[j] < 0) {
                printf("%d ", arr[j]);
                foundNegative = 1;
                break;
            }
        }
        if(!foundNegative) {
            printf("0 ");
        }
    }
    
    return 0;
}