#include <stdio.h>

int main()
{
    int num1,num2;
    char operator;

    /* User enters 2 numbers*/
    printf("Enter first number:\n");
    scanf("%d", &num1);
    printf("Enter second number:\n");
    scanf("%d", &num2);
    printf("Choose operator:\n");
    scanf(" %c", &operator);

    /*Calculate*/
    if (operator=='+')
        printf("Addition: %d+%d=%d\n", num1, num2, num1+num2);
    else if (operator=='-')
        printf("Subtraction: %d-%d=%d\n", num1, num2, num1-num2);
    else if (operator=='*')
        printf("Multiplication: %d*%d=%d\n", num1, num2, num1*num2);
    else if (operator=='/')
        printf("Division:%d/%d=%d\n", num1, num2, num1/num2);
    else if (operator=='%')
    printf("Modulo: %d%%%d=%d", num1, num2, num1%num2);
    else
        printf("Unknown operator: %c\n", operator);

    return 0;
}