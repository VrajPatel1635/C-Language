#include <stdio.h>

int main() {
    int num1, num2;
    char operator;
    float result;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %d + %d = %.2f", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %d - %d = %.2f", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %d * %d = %.2f", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = (float)num1 / num2;
                printf("Result: %d / %d = %.2f", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed!");
            }
            break;
        default:
            printf("Error: Invalid operator!");
            break;
    }

    return 0;
}