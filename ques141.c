//Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
int main() {
    struct Student student;
    
    // Reading student data
    printf("Enter student's name: ");
    fgets(student.name, sizeof(student.name), stdin);
    
    printf("Enter student's roll number: ");
    scanf("%d", &student.roll_no);
    
    printf("Enter student's marks: ");
    scanf("%f", &student.marks);

    // Printing student data
    printf("\nStudent Details:\n");
    printf("Name: %s", student.name);
    printf("Roll Number: %d\n", student.roll_no);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}