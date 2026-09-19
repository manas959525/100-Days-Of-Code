//Q81: Count characters in a string without using built-in length functions.

#include<stdio.h>
int main() {
    char str[100];
    int count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[count] != '\0') {
        count++;
    }
    printf("The number of characters in the string is: %d\n", count - 1); // Subtracting 1 to exclude the newline character added by fgets
    return 0;
}