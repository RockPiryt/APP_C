#include <stdio.h>
#include <stdlib.h>

int main()
{   
    // //Allocate space for array fo 5 int
    // int *a = malloc(sizeof(int)*5);
    
    // //Fill array
    // for (int i=0; i<5 ; i++)
    //     a[i]=i;
    // //Print array
    // for (int i=0; i<5 ; i++)
    //     printf("a[%d] = %d\n", i, a[i]);
    // ////////////////////////////////////////////
    // //Increase size of memory
    // a = realloc(a, sizeof(int)*10);

    // //Fill next 5 values
    // for (int i=5; i<10 ; i++)
    //     a[i]=i;

    // //Print all array
    // for (int i=0; i<10 ; i++)
    //     printf("a[%d] = %d\n", i, a[i]);

    // free(a);
    //////////////////
    // 2 array next to
    int *a1 = malloc(sizeof(int)*5);
    int *a2 = malloc(sizeof(int)*5);
    
    //Fill 2 arrays
    for (int i=0; i<5 ; i++)
        a1[i]=i;

    for (int i=0; i<5 ; i++)
        a2[i]=i;
    
    //Print adresses
    // printf("a1 = %p\n", (void *)a1);
    // printf("a2 = %p\n", (void *)a2);
    
    // //Print beyond array a1
    // for (int i=0; i<17 ; i++)
    //     printf("a1[%d] = %d\n", i, a1[i]);

    //Increase size of array
    printf("a1 = %p\n", (void *)a1);//oryginal address
    a1=realloc(a1, sizeof(int)*20);
    printf("a1 = %p\n", (void *)a1);// change address when is to big

    for (int i=5; i<20 ; i++)
        a1[i]=i;


    //Print beyond array a1
    for (int i=0; i<20 ; i++)
        printf("a1[%d] = %d\n", i, a1[i]);

    free(a1);
    free(a2);

    return 0;
}