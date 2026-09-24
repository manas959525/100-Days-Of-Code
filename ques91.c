//Q91: Remove all vowels from a string.

#include<stdio.h>
void removeVowels(char *str) {
    int i, j = 0;
    char result[100]; // Assuming the input string won't exceed 100 characters
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            result[j++] = str[i];
        }
    }
    result[j] = '\0'; // Null-terminate the result string
    printf("String after removing vowels: %s\n", result);
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read input string
    removeVowels(str);
    return 0;
}