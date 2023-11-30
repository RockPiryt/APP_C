//xmas_tree

#include <stdio.h>
#include <windows.h>

void textcolor(int color_name)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color_name);
}


int main()
{   

    int i,j,k,l;//liczniki

    //zmienne dla korony drzewa
    int nw;//nw pewna ilość wierszy
    nw=8;



    // //zmienne dla pnia
    // //v pewna ilość wierszy
    // //c pewna ilość kolumn
    int v,c;
    v=4;
    c=2;
/*-------------------------------------------------------------------------------------------*/
//Pierwszy trójkąt od góry zaczyna się od 1 gwiazdki i konczy na "nw"->tójkąt z przesunięciem 
/*


     *
    * *
   * * *
  * * * *
 * * * * *
* * * * * *

*/
    for (i=1; i<=nw; i++)//pętla dla określenia ilości wierszy
    {   
        //przed printowaniem gwiazdek printowanie spacji
        for (k=i; k<=nw-1; k++)
        {
            printf(" ");
        }
        //printowanie gwiazdek
        for(j=1;j<=i; j++)
        {
        textcolor(2);
        printf("* ");
        }
    printf("\n");
    }

//Drugi trójkąt zaczyna się od 3 gwiazdek i konczy na "nw"->tójkąt z przesunięciem 
/*

   * * *
  * * * *
 * * * * *
* * * * * *

*/
    for (i=3; i<=nw; i++)//pętla dla określenia ilości wierszy
    {   
        //przed printowaniem gwiazdek printowanie spacji
        for (k=i; k<=nw-1; k++)
        {
            printf(" ");
        }
        //printowanie gwiazdek
        for(j=1;j<=i; j++)
        {
        textcolor(2);
        printf("* ");
        }
    printf("\n");
    }

//Trzeci trójkąt zaczyna się od 4 gwiazdek i konczy na "nw"->tójkąt z przesunięciem 
/*

   * * *
  * * * *
 * * * * *
* * * * * *

*/
    for (i=4; i<=nw; i++)//pętla dla określenia ilości wierszy
    {   
        //przed printowaniem gwiazdek printowanie spacji
        for (k=i; k<=nw-1; k++)
        {
            printf(" ");
        }
        //printowanie gwiazdek
        for(j=1;j<=i; j++)
        {
        textcolor(2);
        printf("* ");
        }
    printf("\n");
    }
/*-------------------------------------------------------------------------------------------*/
// Pień drzewa ->rectangle
    for (i=1; i<=v; i++)//pętla dla określenia ilości wierszy
    {   
        //przed printowaniem gwiazdek printowanie spacji
        for (l=1; l<=6; l++)
        {
            printf(" ");
        }
        for(j=1;j<=c; j++)
        {
        textcolor(6);
        printf("# ");
        }
    
    printf("\n");
    }
    textcolor(7);

    return 0;
}
