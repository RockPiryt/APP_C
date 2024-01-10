/*Napisz program w języku ANSI C, który zadeklaruje statycznie dwie 100-elementowe tablice typu int, następnie wczyta liczby naturalne 
n i m, wczyta do pierwszej tablicy n liczb, następnie wczyta m liczb do drugiej tablicy, a następnie wykona iloczyn skalarny tych tablic zgodnie ze wzorem:

∑=A[i]⋅B[i]

Zastanów się, co w przypadku gdy 
n<m lub m<n.

W przypadku podania jakikolwiek błędnych danych program wypisuje komunikat BŁĄD, a następnie kończy działanie.*/

#include <stdio.h>

// Określenie zmiennych globalnych
int n,m;

//Prototypy funkcji
void print_tab(int tab[][], int tab_size_n, int tab_size_m);
int get_numbers();

int main()

{

    //Inicjalizacja tablicy
    int tab[100][100];

    //wywołanie funkcji wypełniającej tablice
    print_tab(tab,n,m);

    return 0;
}

void print_tab(int tab[][], int tab_size_n, int tab_size_m,)
{
    int i;

    for(i=1;i<=tab_size;++i)
    {
    tab[i] = i;
    printf("%d", tab[i]);
    if(i <=tab_size-1)
            printf(" ");
    }
    printf("\n");
}

int get_numbers()
{
    // // Określenie zmiennych
    // int n,m;


    //Pobranie od usera liczby n (jako wielkość tablicy)
    printf("Podaj pierwsza liczbe naturalna <=100: \n");
    scanf("%d", &n);
    printf("Podaj druga liczbe naturalna <=100: \n");
    scanf("%d", &m);

    //Sprawdzzenie żeby u było naturalne i nie wykraczało poza zakres 100
    if(n<0 || m<0)
    {
        printf("BŁĄD");
        return 1;
    }
    else if(n>100 || m>100)
    {
        printf("BŁĄD");
        return 1;
    }
    return n, m;
}
