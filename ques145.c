//Q145: Return a structure containing top student's details from a function.

#include<stdio.h>
int main()
{
    struct student
    {
        char name[20];
        int roll_no;
        float marks;
    };

    struct student top_student;

    // Function to get top student's details
    struct student get_top_student()
    {
        struct student s;
        printf("Enter top student's name: ");
        scanf("%s", s.name);
        printf("Enter top student's roll number: ");
        scanf("%d", &s.roll_no);
        printf("Enter top student's marks: ");
        scanf("%f", &s.marks);
        return s;
    }

    top_student = get_top_student();

    printf("\nTop Student Details:\n");
    printf("Name: %s\n", top_student.name);
    printf("Roll Number: %d\n", top_student.roll_no);
    printf("Marks: %.2f\n", top_student.marks);

    return 0;
}
