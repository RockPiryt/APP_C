/*Puste znaki
Napisz program, który usunie z wejścia wszystkie spacje:



Przykładowe wejście

Programowanie w języku C

Przykładowe wyjście

ProgramowaniewjęzykuC*/

#include <stdio.h>

int main()
{   char c;
    while((c=getchar())!=EOF)
    {   
        if(c!=' ')
        {
            putchar(c);
        }
    }

    return 0;
}
