//Shapes

#include <stdio.h>


int main()
{   

    int i,j,k;//liczniki

    //zmienne dla korony drzewa
    int w;//nw pewna ilość wierszy
    w=5;



    // //zmienne dla pnia
    // //w pewna ilość wierszy
    // //k pewna ilość kolumn
    // int w,k;
    // w=4;
    // k=5;

    //Pierwszy trójkąt od góry
    /*
    tójkąt z przesunięciem 
    *
   * *
  * * *
 * * * *
* * * * *
*/
    for (i=1; i<=w; i++)//pętla dla określenia ilości wierszy
    {   
        //przed printowaniem gwiazdek printowanie spacji
        for (k=i; k<=w-1; k++)
        {
            printf(" ");
        }
        //printowanie gwiazdek
        for(j=1;j<=i; j++)
        {
        printf("* ");
        }
    printf("\n");
    }

    // //pień drzewa ->rectangle
    // for (i=1; i<=nw; i++)//pętla dla określenia ilości wierszy
    // {   
    //     for(j=1;j<=nk; j++)
    //     {
    //     printf("* ");
    //     }
    
    // printf("\n");
    // }


    return 0;
}
