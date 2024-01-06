#include <stdio.h>


int main()
{   
    //Counters
    int i,j,k;


    //User enter rows number
    int row;//row pewna ilość wierszy
    printf("Please enter rows number: ");
    scanf("%d", &row);

    
/*
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5

*/
    for (i=1; i<=row; i++)//pętla dla określenia ilości wierszy
    {   
        //przed printowaniem cyfr printowanie spacji
        for (k=i; k<=row-1; k++)
        {
            printf(" ");
        }

        //printowanie cyfr
        for(j=1;j<=i; j++)
        {
        printf("%d ", j);
        }
        j++;

    printf("\n");
    }
    
    return 0;
}