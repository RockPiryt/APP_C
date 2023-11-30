/*Napisz program, który oblicza silnię liczby podanej na wejściu.

Przykładowe wejście: 5
Przykładowe wyjście: 120
*/

//Factorial

#include <stdio.h>

int main()
{   
    int num, i;
    int fact=1;
    
    printf("Please enter  number: \n");
    scanf("%d", &num);

    for(i=1; i<=num; i++)
    {
        fact=fact*i;
        //fact=fact*i;
        //fact*i=1*[1]
        //fact*2=fact*1*[2]
        //fact*3= fact*1*2*[3]poprzednia wartość *3
        //fact*4 = fact*1*2*3*[4]
        //fact*5 = fact*1*2*3*4*5
    }
    printf("%d!=%d",num, fact);
    return 0;

}