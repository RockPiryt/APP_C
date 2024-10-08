#include <stdio.h>



int main()
{   
    int *wsk = NULL;
    int n = 5;

    wsk = &n; // przypisanie adresu liczby do pointera
    printf(" adres zmiennej n :%p\n", (void *)wsk);

    printf("adres zmiennej n II sposob: %p\n", wsk);

    printf("dostęp do zawartosci pointera: %d", *wsk);
    return 0;
}
