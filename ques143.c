//Q143: Find and print the student with the highest marks.

#include<stdio.h>
struct Student {
    char name[50];
    int marks;
};
int main() {
    struct Student students[5];
    for(int i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }
    struct Student topStudent = students[0];
    for(int i = 1; i < 5; i++) {
        if(students[i].marks > topStudent.marks) {
            topStudent = students[i];
        }
    }
    printf("Student with highest marks:\n");
    printf("Name: %s\n", topStudent.name);
    printf("Marks: %d\n", topStudent.marks);
    return 0;
}