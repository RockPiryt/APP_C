#include <stdio.h>
#include <ctype.h>

//Przepisywanie znaków
/*Napisz program, który będzie przepisywał znaki z wejścia na wyjście tak długo, aż napotka znak 'q'.*/

int main()
{   char c;

    while((c=getchar())!=EOF)
    {
        if(c=='q')
        {
            break;
        }
        
        putchar(c);
    }

    return 0;
}

