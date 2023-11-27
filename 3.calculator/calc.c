#include <stdio.h>

int main()
{
    int num1,num2;

    /* Pobranie od usera 2 liczb*/
    printf("Podaj pierwsza liczbe:\n");
    scanf("%d", &num1);
    printf("Podaj druga liczbe:\n");
    scanf("%d", &num2);

    /*Obliczenia kalkulatora*/
    printf("Dodawanie: %d+%d=%d\n", num1, num2, num1+num2);
    printf("Odejmowanie: %d-%d=%d\n", num1, num2, num1-num2);
    printf("Mnozenie: %d*%d=%d\n", num1, num2, num1*num2);
    printf("Dzielenie:%d/%d=%d\n", num1, num2, num1/num2);
    printf("Modulo: %d%%%d=%d", num1, num2, num1%num2);

    return 0;
}