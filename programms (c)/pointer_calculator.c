#include<stdio.h>
void add(float *result, float a, float b) {
    *result = a + b;
}

void subtract(float *result, float a, float b) {
    *result = a - b;
}

void multiply(float *result, float a, float b) {
    *result = a * b;
}

void divide(float *result, float a, float b) {
    *result = a / b;
}
int main() {
    char operator;
    float num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);

    // Using switch case to call the appropriate function
    switch (operator) {
        case '+':
            add(&result, num1, num2);
            break;
        case '-':
            subtract(&result, num1, num2);
            break;
        case '*':
            multiply(&result, num1, num2);
            break;
        case '/':
            if (num2 != 0) {
                divide(&result, num1, num2);
            } else {
                printf("Error! Division by zero.\n");
                return 1;
            }
            break;
        default:
            printf("Error! Invalid operator.\n");
            return 1;
    }

    printf("Result: %.2f %c %.2f = %.2f\n", num1, operator, num2, result);

    return 0;
}