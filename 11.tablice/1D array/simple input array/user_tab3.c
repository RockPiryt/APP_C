/*Napisz program w języku ANSI C, który zadeklaruje statycznie tablicę 100 elementową o nazwie tab, następnie wczyta liczbę naturalną n≤100, następnie wypełni tablicę tab elementami 1,…,n (po kolei), a następnie wypisze tę tablicę na ekranie.

Nie piszemy kodu wypisującego elementy na ekranie oraz nie usuwamy linii print_tab(tab,n)!!!

W przypadku niepoprawnych danych program ma wyświetlić komunikat: BŁĄD i wyjść z programu.

Na końcu wypisanej tablicy ma się znaleźć znak nowej linii, a nie spacja.!*/


#include <stdio.h>


void print_tab(int tab[], int tab_size)
{
    int i;

    for(i=0;i<tab_size;++i)
    {
      printf("%d ", tab[i]);
    }
}

int main()
{   // Określenie zmiennych
    int n;

    //Pobranie od usera liczby n (jako wielkość tablicy)
    printf("Podaj liczbe naturalna <=100: \n");
    scanf("%d", &n);

    //Sprawdzzenie żeby u było naturalne i nie wykraczało poza zakres 100
    if(n<=0)
    {
        printf("BŁĄD");
        return 0;
    }
    else if(n>=100)
    {
        printf("BŁĄD");
        return 0;
    }



    //Inicjalizacja tablicy
    int tab[100];

    //wypełnienie tablicy danymi od usera
    for (int i=0; i<n; i++) {
      scanf("%d", &tab[i]);
    }

    //wywołanie funkcji printującej tablice do przedostatniego elementu
    print_tab(tab,n-1);
    //dla ostatniej pętli enter
    printf("%d\n", tab[n-1]);

    return 0;
}