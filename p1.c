#include <stdio.h>
#include<string.h>
int main() {
    double num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            result = num1+num2;
            break;
        case '-':
            result =num1-num2;
            break;
        case '*':
            result = num1*num2;
            break;
        case '/':
            result =num1/num2;
            break;
        default:
            printf("Invalid operator\n");
            return 1;
    }

    printf("%lf %c %lf = %lf\n", num1, operator, num2, result);

    return 0;
}


