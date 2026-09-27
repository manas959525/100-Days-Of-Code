//Q97: Print the initials of a name.

#include <stdio.h>
int main() {
    char name[100];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    printf("Initials: ");
    for (int i = 0; name[i] != '\0'; i++) {
        if (i == 0 || name[i - 1] == ' ') {
            printf("%c", name[i]);
        }
    }
    printf("\n");    return 0;
}   