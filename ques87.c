//Q87: Count spaces, digits, and special characters in a string.

#include<stdio.h>
int main() {
    char str[100];
    int spaces = 0, digits = 0, specialChars = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            spaces++;
        } else if(str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            // Do nothing for alphabetic characters
        } else {
            specialChars++;
        }
    }
    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", specialChars);
    return 0;
}