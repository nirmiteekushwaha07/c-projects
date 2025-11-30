#include <stdio.h>

int main() {
    char op;
    double a, b;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    switch (op) {
        case '+': printf("Result = %.2lf", a + b); break;
        case '-': printf("Result = %.2lf", a - b); break;
        case '*': printf("Result = %.2lf", a * b); break;
        case '/':
            if (b != 0) printf("Result = %.2lf", a / b);
            else printf("Error! Cannot divide by zero");
            break;
        default: printf("Invalid operator");
    }

    return 0;
}