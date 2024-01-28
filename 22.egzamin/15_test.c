#include <stdio.h>

/*Zadanie 15 podaj kod z jedna insrukcja if, 
ktory wyswietli napis TAK tylko wtedy gdy 
zmienna liczbowa x jest wieksza badz rowna 
niz zmienna y lub gdy iloczyn obu tych zmiennych 
jest liczba nieparzysta*/



int main()
{   
    
    int x=3;
    int y=3;

    if (x>=y || (x*y)%2==1)
    {
        printf("TAK");
    }
    
    return 0;
}

