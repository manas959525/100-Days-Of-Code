//Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>
int main() {
    char name[100], surname[100];
    printf("Enter your full name (First Middle Last): ");
    fgets(name, sizeof(name), stdin);
    // Remove newline character if present
    name[strcspn(name, "\n")] = 0;
    // Extract surname
    strcpy(surname, strrchr(name, ' ') + 1);
    // Remove surname from name
    *(strrchr(name, ' ')) = '\0';
    // Print initials and surname
    printf("Initials: ");
    for (int i = 0; name[i] != '\0'; i++) {
        if (i == 0 || name[i - 1] == ' ') {
            printf("%c", name[i]);
        }
    }
    printf(" %s\n", surname);
    return 0;
}