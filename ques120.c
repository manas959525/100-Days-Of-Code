//Q120: Write a program to take a string input. Change it to sentence case.

#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Convert to sentence case
    int len = strlen(str);
    if (len > 0) {
        // Convert first character to uppercase if it's a letter
        if (str[0] >= 'a' && str[0] <= 'z
') {
            str[0] = str[0] - ('a' - 'A');
        }
        // Convert the rest of the characters to lowercase
        for (int i = 1; i < len; i++) {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = str[i] + ('a' - 'A');
            }
        }
    }
    printf("Sentence case: %s", str);
    return 0;
}
