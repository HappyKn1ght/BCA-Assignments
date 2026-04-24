#include <stdio.h>

int main()
{
    float num1, num2, result;
    char op;

    printf(" || Calculator ||\n\n");

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("\nchoose the operation(+, -, *, /): ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        printf("Invalid Operation, Try again\n");
    }

    printf("result: %.1f", result);

    return 0;
}
