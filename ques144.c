//Q144: Write a function that accepts a structure as parameter and prints its members.

#include<stdio.h>
struct Person {
    char name[50];
    int age;
};
void printPerson(struct Person p) {
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
}
int main() {
    struct Person person1;
    printf("Enter name: ");
    scanf("%s", person1.name);
    printf("Enter age: ");  
    scanf("%d", &person1.age);
    printPerson(person1);
    return 0;
}