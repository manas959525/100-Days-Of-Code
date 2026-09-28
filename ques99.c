//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include<stdio.h>
#include<string.h>
int main() {
    char date[11];
    printf("Enter date in dd/04/yyyy format: ");
    scanf("%s", date);
    printf("Date in dd-Apr-yyyy format: %c%c-%s-%c%c%c%c\n", date[0], date[1], "Apr", date[6], date[7], date[8], date[9]);
    return 0;
}