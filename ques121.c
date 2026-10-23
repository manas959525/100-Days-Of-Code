//Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

#include<stdio.h>
int main()
{
    FILE *file;
    char name[50];
    int age;

    // Open the file in write mode
    file = fopen("info.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Take user input for name and age
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // Read name with spaces
    printf("Enter your age: ");
    scanf("%d", &age);

    // Write the data to the file
    fprintf(file, "Name: %sAge: %d\n", name, age);

    // Close the file
    fclose(file);

    // Confirm that data was saved
    printf("Data successfully saved to info.txt\n");

    return 0;
}