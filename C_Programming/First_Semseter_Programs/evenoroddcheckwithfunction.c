//write a c program to aecept two numbers from user and define 4 function addition, subtraection, multiplicauson, division to perform these operation.
#include <stdio.h>

int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

float division(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0.0;
    }
    return (float)a / b;
}

int main() {
    int choice, num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nChoose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Result: %d\n", addition(num1, num2));
            break;
        case 2:
            printf("Result: %d\n", subtraction(num1, num2));
            break;
        case 3:
            printf("Result: %d\n", multiplication(num1, num2));
            break;
        case 4:
            printf("Result: %.2f\n", division(num1, num2));
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
