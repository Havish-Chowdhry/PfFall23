question ## 1 of lab manual ## 1

#include <stdio.h>

int main() {
    int num1;
    int num2;
    int result;
    char operation;
    printf("Enter the operation you want to perform (+, -, *, /): ");
    scanf(" %c", &operation);

    printf("Enter num1: ");
    scanf(" %d", &num1);
    printf("Enter num2: ");
    scanf(" %d", &num2);

    if (operation == '+') {
        result = num1 + num2;
    } else if (operation == '-') {
        result = num1 - num2;
    } else if (operation == '*') {
        result = num1 * num2;
    } else if (operation == '/') {
        if (num2 != 0) {
            result = num1 / num2;
        } else {
            printf("Zero Division Error\n");
            return 1;
        }
    } else {
        printf("Invalid operation performed\n");
        return 1;
    }

    printf("Result: %d\n", result);
    return 0;
}
