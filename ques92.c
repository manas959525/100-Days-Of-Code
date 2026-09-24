//Q92: Find the first repeating lowercase alphabet in a string.

#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    int count[26] = {0}; // Array to store count of each character
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read input string
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count[str[i] - 'a']++;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] > 1) {
            printf("First repeating lowercase alphabet: %c\n", 'a' + i);
            return 0;
        }
    }
    printf("No repeating lowercase alphabet found.\n");
    return 0;
}