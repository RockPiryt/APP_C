/*Napisz program w języku ANSI C, który zadeklaruje statycznie tablicę 10 elementową o nazwie tab, następnie wypełni je liczbami od 1 do 10 (po kolei), a następnie wyświetli elementy tej tablicy na ekranie.

Nie piszemy kodu wypisującego elementy na ekranie oraz nie usuwamy linii print_tab(tab,10)!!!*/

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
{
    int tab[10];

    print_tab(tab,10); 

    return 0;
}
