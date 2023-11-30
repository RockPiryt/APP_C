//Shapes

#include <stdio.h>


int main()
{   
    int i,j,nw,nk;
    //nw pewna ilość wierszy
    //nk pewna ilość kolumn

    nw=6;
    nk=5;

    //pień drzewa ->rectangle
    printf("rectangle\n");
    for (i=1; i<=nw; i++)//pętla dla określenia ilości wierszy
    {   
        for(j=1;j<=nk; j++)
        {
        printf("*");
        }
    
    printf("\n");
    return 0;
}
