//Q140: Define a struct with enum Gender and print person's gender.

#include <stdio.h>
// Define an enum for Gender
enum Gender {
    MALE,
    FEMALE,
    OTHER
};
// Define a struct for Person
struct Person {
    char name[50];
    enum Gender gender;
};
// Function to print person's gender
void printGender(struct Person p) {

    printf("Name: %s\n", p.name);
    printf("Gender: ");
    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Unknown\n");
            break;
    }
}
int main() {
    struct Person person1;
    // Assign values to person1
    snprintf(person1.name, sizeof(person1.name), "John Doe");
    person1.gender = MALE;
    printGender(person1);
    return 0;
}
