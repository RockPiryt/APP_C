#include <stdio.h>

int main()
{
    int x, mod;
    printf("podaj liczbe:\n");
    scanf("%d",&x);
    mod=x%2;
    printf("reszta z dzielenia twojej liczby %d przez 2 wynosi = %d\n",x,mod);
    if(mod==0)
    {
        printf("twoja liczba jest parzysta");
    }

    return 0;
}