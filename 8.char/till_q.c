#include <stdio.h>

//Przepisywanie znaków
/*Napisz program, który będzie przepisywał znaki z wejścia na wyjście tak długo, aż napotka znak 'q'.*/

int main()
{   char c;

    while(c!='q' && (c=getchar())!=EOF)
    {
        putchar(c);
    }

    return 0;
}

