//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

#include<stdio.h>
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};
int main() {
    FILE *file;
    struct Student students[3];
    // Input student records
    for(int i = 0; i < 3; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter roll number of student %d: ", i + 1);
        scanf("%d", &students[i].rollNumber);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &students[i].marks);
    }
    // Write student records to file
    file = fopen("students.txt", "w");      
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    for(int i = 0; i < 3; i++) {
        fprintf(file, "%s %d %.2f\n", students[i].name, students[i].rollNumber, students[i].marks);
    }
    fclose(file);
    // Read student records from file
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("\nStudent Records:\n");
    for(int i = 0; i < 3; i++) {
        fscanf(file, "%s %d %f", students[i].name, &students[i].rollNumber, &students[i].marks);
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n", students[i].name, students[i].rollNumber, students[i].marks);
    }
    fclose(file);
    return 0;
}   