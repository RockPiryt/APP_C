#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

char tablica[1000];
char c;
int indeks = 0;

    while ((c = getchar()) !=EOF)
    {
        tablica[indeks] = c;
        ++indeks;
    }

    for (int i = 0; i<indeks; ++i) 
    {
        char znak = tablica[i];
        if(isspace(znak))
        {
            
        }
        else
        {
            printf("%c", toupper(znak));
        }
    }

}