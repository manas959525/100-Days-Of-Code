//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include<stdio.h>
int main() {
    enum Menu { ADD = 1, SUBTRACT, MULTIPLY };
    int choice;
    float num1, num2, result;

    printf("Menu:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    if (choice < ADD || choice > MULTIPLY) {
        printf("Invalid choice!\n");
        return 1;
    }

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (choice) {
        case ADD:
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case SUBTRACT:
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case MULTIPLY:
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        default:
            printf("Invalid operation!\n");
            break;
    }

    return 0;
}