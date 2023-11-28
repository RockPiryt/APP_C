#include <stdio.h>

int main()
{
    int num1,num2;

    /* Pobranie od usera 2 liczb*/
    printf("Podaj pierwsza liczbe:\n");
    scanf("%d", &num1);
    printf("Podaj druga liczbe:\n");
    scanf("%d", &num2);


    /*Obliczenie dzielenia jak różne od zero*/
    if (num2!=0)
    {
        printf("Dzielenie mozliwe: %d/%d=%d\n", num1, num2, num1/num2);
        return 0;
    }

    else //if (num2==0)
    {
        printf("Dzielenie przez zero jest nie dozwolone!");
        return 1;
    }


}