#include <stdio.h>

double add(double a, double b) {
    return a + b;
}
double subtract(double a, double b) {
    return a - b;
}
double multiply(double a, double b) {
    return a * b;
}
double divide(double a, double b) {
    return a / b;
}

int main() {
    int choice;
    double num1, num2, result;
    do {
        printf("\n===== SIMPLE CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice >= 1 && choice <= 4) {
            printf("Enter first number: ");
            scanf("%lf", &num1);
            printf("Enter second number: ");
            scanf("%lf", &num2);
        }
        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("Result = %.2lf\n", result);
                break;
            case 2:
                result = subtract(num1, num2);
                printf("Result = %.2lf\n", result);
                break;
            case 3:
                result = multiply(num1, num2);
                printf("Result = %.2lf\n", result);
                break;
            case 4:
                if (num2 == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                } else {
                    result = divide(num1, num2);
                    printf("Result = %.2lf\n", result);
                }
                break;
            case 5:
                printf("Calculator closed. Thank you!\n");
                break;
            default:
                printf("Invalid choice. Please select 1 to 5.\n");
        }
    } while (choice != 5);
    return 0;
}
