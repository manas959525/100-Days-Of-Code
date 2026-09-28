//Q100: Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j <= len; j++) {
            for (int k = i; k < j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }
    return 0;
}