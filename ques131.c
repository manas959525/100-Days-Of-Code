//Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.

#include <stdio.h>

enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main() {
    for (enum Day day = SUNDAY; day <= SATURDAY; day++) {
        printf("%d = %d\n", day, day);
    }
    return 0;
}