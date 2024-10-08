#include <stdio.h>

int a=8857, b=4356;

int *wsk1 = &a;
int *wsk2 = &b;

int main(void)
{   // dostęp do ADRESU zmiennej (do szufladki)
    printf("adres zmiennej a: %d\n", (int)wsk1);
    printf("adres zmiennej b: %d\n", (int)wsk2);

    printf("%d\n", wsk1);
    printf("%d\n", wsk2);

    // dostęp do WARTOŚCI zmiennej
    printf("wartosc zmiennej a: %d\n", *wsk1);
    printf("wartosc zmiennej b: %d\n", *wsk2);

    return 0;
}