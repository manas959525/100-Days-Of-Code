//Q146: Create Employee structure with nested Date structure for joining date and print details.

#include<stdio.h>
int main() {
    struct Date {
        int day;
        int month;
        int year;
    };

    struct Employee {
        char name[50];
        int id;
        struct Date joiningDate;
    };

    struct Employee emp;

    // Input employee details
    printf("Enter Employee Name: ");
    scanf("%s", emp.name);
    
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    
    printf("Enter Joining Date (DD MM YYYY): ");
    scanf("%d %d %d", &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year);

    // Print employee details
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Joining Date: %02d/%02d/%04d\n", emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);

    return 0;
}