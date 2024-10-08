#include <stdio.h>
// nie działa bo każdy z bit ma być z osobna, teraz nieskończona pętla


// Funkcja rekurencyjna do zamiany liczby dziesiętnej na binarną
void dec_to_bin(int n) 
{
    if (n < 0) 
    {
        printf("BŁĄD: Podano liczbę mniejszą od zera.\n");
        return;
    }

    if (n > 0)
    {
        int binary=0;
        int mul=1;
        int  bit;

        while(n>0)
        {   
            bit = n % 2;// reszta z dzielenia przez 2
            printf("%d ", bit); // printowanie bita
            binary += bit * mul;// na którym miejscu ma wylądować bit
            mul *= 10;// zwiększanie mul aby stawiać bit na kolejnym miejscu
        }
        dec_to_bin(n / 2);
    }

    // if (n > 0) {
    //     dec_to_bin(n / 2);
    //     printf("%d", n % 2);
    // }
}

int main() {
    int liczba;

    // Użytkownik wprowadza liczbę dziesiętną
    printf("Podaj liczbę dziesiętną: ");
    scanf("%d", &liczba);

    // Sprawdzamy, czy liczba jest nieujemna
    if (liczba < 0) {
        printf("BŁĄD: Podano liczbę mniejszą od zera.\n");
        return 1; // Zwracamy kod błędu
    }

    // Wywołujemy funkcję dec_to_bin
    printf("Liczba binarna: ");
    dec_to_bin(liczba);

    return 0;
}


