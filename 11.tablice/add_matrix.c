#include <stdio.h>


int main()

{   // Określenie zmiennych
    int i,j;//liczniki
    int a;// wartości od usera - wiersze 1 macierz
    int b;// wartości od usera - kolumny 1 macierz
    int c;// wartości od usera - wiersze 2 macierz
    int d;// wartości od usera - kolumny 2 macierz

    //Inicjalizacja tablicy
    int tab1[100][100] = {0};
    int tab2[100][100] = {0};
    int sum[100][100] = {0};
    
    
    //Pobranie od usera a i b dla piewszej macierzy oraz c i d dla drugiej
    printf("Enter the rows and the columns (between 1 and  100) for 1st matrix:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("a:%d, b:%d\n", a,b);
    

    printf("Enter the rows and the columns (between 1 and  100) for 2nd matrix:\n");
    scanf("%d %d", &c, &d);

    //Sprawdzenie a i b czy spełniają warunki
    if(a<0 || b<0 || a>100 || b>100 )
    {
        printf("error");
        return 1;
    }

    if(c<0 || d<0 || c>100 || d>100 )
    {
        printf("error");
        return 1;
    }

    
    // //Pobranie od usera liczb do wypełnienia tablicy
    printf("Enter numbers for 1st matrix:\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&tab1[i][j]);
        }
    printf("\n");
    }

    printf("Enter numbers for 2nd matrix:\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&tab2[i][j]);
        }
    printf("\n");
    }

    // Dodawnie macierzy
    for (i = 0; i < a; ++i)
    {
        for (j = 0; j < b; ++j) 
        {
        sum[i][j] = tab1[i][j] + tab2[i][j];
        }
    }

    
    //Printowanie tablicy
    printf("Here is your matrix:\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d \t",sum[i][j]);
        }

    printf("\n");
    }

    return 0;
}