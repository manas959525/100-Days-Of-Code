//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

include<stdio.h>
int main()
{
    int n, i, repeatedElement;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements of the array:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    // Using XOR to find the repeated element
    repeatedElement = 0;
    for(i = 0; i < n; i++)
    {
        repeatedElement ^= arr[i];
    }
    
    printf("The repeated element is: %d\n", repeatedElement);
    
    return 0;
}