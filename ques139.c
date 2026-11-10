//Q139: Show that enums store integers by printing assigned values.

#include <stdio.h>

enum Status { SUCCESS = 0, FAILURE = 1, TIMEOUT = 2 };

int main() {
    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);
    return 0;
}