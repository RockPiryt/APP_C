
//Shapes

#include <stdio.h>

int main()
{   
    int i,j,nw,nk;
    //nw pewna ilość wierszy
    //nk pewna ilość kolumn

    nw=6;
    nk=5;

/*-----------------------------------------------------------------------------------------*/
    //rectangle
    /*
    *****
    *****
    *****
    *****
    *****
    *****
    */
    printf("rectangle\n");
    for (i=1; i<=nw; i++)//pętla dla określenia ilości wierszy, stemplowanie w pionie
    {   
        for(j=1;j<=nk; j++) //
        {                  //
        printf("*");       //blok do stemplowania w poziomie
        }                  //
    
    printf("\n");//każdy wiersz w nowym wierszu
    }
/*-----------------------------------------------------------------------------------------*/
    //triangle normal
    /*
    *
    **
    ***
    ****
    *****
    ******
    */
    printf("triangle normal\n");
    for (i=1; i<=nw; i++)//pętla dla określenia ilości wierszy
    {   
        for(j=1;j<=i; j++) //
        {                  //
        printf("*");       //blok do stemplowania w poziomie 
        }                  //w drugim wierszu postawi 2 stemple bo zakres od 1 do 2
    
    printf("\n");
    }
/*-----------------------------------------------------------------------------------------*/

    //decreasing triangle normal
    /*
    ******
    *****
    ****
    ***
    **
    *
    */
    printf("decreasing triangle normal\n");
    for (i=1; i<=nw; i++)//pętla dla określenia ilości wierszy
    {   
        for(j=i;j<=nw; j++) //
        {                  //
        printf("*");       //blok do stemplowania w poziomie 
        }                  //zakres się zmniejsza bo wartość początkowa i się zwiększa
    
    printf("\n");
    }
/*-----------------------------------------------------------------------------------------*/
    //right sided triangle increasing /| up
    /*
      *
     **
    ***
   ****
  *****
 ******
    */

    printf("right sided triangle /| up\n");
    
    for (i=1; i<=nw; i++)//określenie ilości wierszy
    {   
        // decreasing triangle with "space"|/
        for(j=i;j<=nw; j++) 
        {
        printf(" ");
        }

        //increasing triangle with "*"/|
        for(j=1;j<=i; j++) 
        {
        printf("*");
        }

    printf("\n");
    }
/*-----------------------------------------------------------------------------------------*/
    //right sided triangle decreasing \| down
    /*
    ******
    *****
    ****
    ***
    **
    *
    */
    printf("right sided triangle \\| down\n");

    for (i=1; i<=nw; i++)//określenie ilości wierszy
    {
        //increasing triangle with "space"|\
        for(j=1;j<=i; j++) 
        {
        printf(" ");
        }

        // decreasing triangle with "*"\|
        for(j=i;j<=nw; j++) 
        {
        printf("*");
        }
    printf("\n");
    }
/*-----------------------------------------------------------------------------------------*/
    //hill pattern \|
    /*
      *
     ***
    *****
   *******
  *********
 ***********
    */
    printf("hill pattern /\\\n");

    for (i=1; i<=nw; i++)//określenie ilości wierszy
    {
        // decreasing triangle with "space"|/
        for(j=i;j<=nw; j++) 
        {
        printf(" ");
        }

        //right sided triangle with "*"/|
        for(j=1;j<i; j++) //<- j<i aby wyprintować jedną kolumnę mniej
        {
        printf("*");
        }

        // triangle with "*"/|
        for(j=1;j<=i; j++) 
        {
        printf("*");
        } 

    printf("\n");
    }
/*-----------------------------------------------------------------------------------------*/
    //reverse hill pattern \/
    /*
 ***********
  *********
   *******
    *****
     ***
      *
    */
    printf("reverse hill pattern \\/\n");

    for (i=1; i<=nw; i++)//określenie ilości wierszy
    {
        //increasing triangle with "space"
        for(j=1;j<=i; j++) 
        {
        printf(" ");
        }

        // decreasing triangle with "*"\|
        for(j=i;j<nw; j++) 
        {
        printf("*");
        }

        // decreasing triangle normal
        for(j=i;j<=nw; j++) //
        {                  //
        printf("*");       //blok do stemplowania w poziomie 
        }
        
    printf("\n");
    }
/*-----------------------------------------------------------------------------------------*/
    return 0;
}