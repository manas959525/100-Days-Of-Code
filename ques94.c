//Q94: Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>
#define MAX 100
int main() {
    char str[MAX], longest[MAX];
    int i, length = 0, maxLength = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    char *token = strtok(str, " \n");
    while (token != NULL) {
        length = strlen(token);
        if (length > maxLength) {
            maxLength = length;
            strcpy(longest, token);
        }
        token = strtok(NULL, " \n");
    }

    printf("The longest word is: %s\n", longest);
    return 0;
}