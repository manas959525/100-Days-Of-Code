//Q88: Replace spaces with hyphens in a string.

#include<stdio.h>
void replaceSpacesWithHyphens(char *str) {
    while (*str != '\0') {
        if (*str == ' ') {
            *str = '-';
        }
        str++;
    }
}