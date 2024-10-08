#include <stdio.h>


int main()

{   // Określenie zmiennych
    int i,j;//liczniki
    int a;// wartości od usera - wiersze
    int b;// wartości od usera - kolumny

    //Inicjalizacja tablicy
    int tab[100][100] = {0};
    
    //Pobranie od usera a(ilość wierszy) i b(ilość kolumn)
    printf("Podaj dwie liczby wieksze od 0:\n");
    scanf("%d %d", &a, &b);

    //Sprawdzenie a i b czy spełniają warunki
    if(a<0 || b<0 || a>100 || b>100 )
    {
        printf("error");
        return 1;
    }

    
    // //Pobranie od usera liczb do wypełnienia tablicy
    printf("Podaj liczby do tablicy:\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&tab[i][j]);
        }
    printf("\n");
    }
    
    //Printowanie tablicy
    printf("Oto twoja tablica:\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d \t",tab[i][j]);
        }

    printf("\n");
    }

    return 0;
}