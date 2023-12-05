/*Napisz program w języku ANSI C, który zadeklaruje statycznie tablicę 100 elementową o nazwie tab, następnie wczyta liczbę naturalną n≤100, następnie wypełni tablicę tab elementami 1,…,n (po kolei), a następnie wypisze tę tablicę na ekranie.

Nie piszemy kodu wypisującego elementy na ekranie oraz nie usuwamy linii print_tab(tab,n)!!!

W przypadku niepoprawnych danych program ma wyświetlić komunikat: BŁĄD i wyjść z programu.

Na końcu wypisanej tablicy ma się znaleźć znak nowej linii, a nie spacja.!*/

#include <stdio.h>


void print_tab(int tab[], int tab_size)
{
    int i;

    for(i=1;i<=tab_size;++i)
    {
    tab[i] = i;
    printf("%d ", tab[i]);
    }
}

int main()
{   // Określenie zmiennych
    int n;
    int u;

    //Pobranie od usera liczby n (jako wielkość tablicy)
    printf("Podaj liczbe naturalna <=100: \n");
    scanf("%d", &u);

    //Sprawdzzenie żeby u było naturalne i nie wykraczało poza zakres 100
    if(u<0)
    {
        printf("BŁĄD");
        return 1;
    }
    else if(u>100)
    {
        printf("BŁĄD");
        return 1;
    }


    //Żeby nie robiło ostatniej pętli
    n=u-1;


    //Inicjalizacja tablicy
    int tab[100];

    //wywołanie funkcji wypełniającej tablice
    print_tab(tab,n);

    //Przypisanie wartości dla ostatniego elementu tablicy
    tab[u]=u;
    printf("%d\n", tab[u]);

    return 0;
}
