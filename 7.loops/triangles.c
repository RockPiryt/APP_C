/*
Napisz program, który narysuje z symboli '*' trójkąty o wymiarze podanym przez użytkownika na wejściu. Na końcu każdej linii nie powinny się znajdować spacje.

Przykładowe wejście

1

Przykładowe wyjście

*

Przykładowe wejście

3

Przykładowe wyjście

*

**

***

*/

#include <stdio.h>

int main()
{   
    int num;
    int i,j;
    char symbol='*';

    printf("Please enter number: \n");
    scanf("%d", &num);

    for(i=0; i<num; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;

}