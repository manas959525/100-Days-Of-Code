//Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

#include<stdio.h>
int main() {
    int n, i, j, count;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int nums[n];
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    int majorityElement = -1;
    for(i = 0; i < n; i++) {
        count = 0;
        for(j = 0; j < n; j++) {
            if(nums[j] == nums[i]) {
                count++;
            }
        }
        if(count > n / 2) {
            majorityElement = nums[i];
            break;
        }
    }
    
    printf("The majority element is: %d\n", majorityElement);
    return 0;
}