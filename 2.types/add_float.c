#include <stdio.h>

int main()
{
    float num1, num2;

    printf("Enter number 1:\n");
    scanf("%f", &num1);

    printf("Enter number 2:\n");
    scanf("%f", &num2);

    printf("%.2f+%.2f=%.2f", num1, num2, num1+num2);

    return 0;

}