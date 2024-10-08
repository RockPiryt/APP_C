

#include <stdio.h>
#include <string.h>

#define SIZE 100

void print_city(char tab[], int tab_size)
{
    int i;

    for(i=1;i<=tab_size;++i)
    {
    printf("%d ", tab[i]);
    }
}

int main()
{
    char city[][100]={"Bruksela", "Amsterdam", "Antwerpia", "Kraków", "Wiedeń", "Warszawa"};

    print_city(city, 3);

    return 0;
}