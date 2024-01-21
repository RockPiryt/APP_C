#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int **mytab;
    int n,k;

    //Allocate space memory for 2D array
    mytab = (int**)malloc(5 * sizeof(int*));

    if (mytab == NULL)
    {
        perror("Error in malloc");
        exit (1);
    }

    for (n=0; n<5; n++)
    {
        mytab[n] = (int*)malloc(2 * sizeof(int));
        
        if(mytab[n] == NULL)
        {
        perror("Error in malloc2");
        exit (1);
        }
    }

    for (n=0; n<5; n++)
    {
        for (k=0; k<2; k++)
        {
        printf("%p ",*(*(mytab+n)+k));
        }
        putchar('\n');
    }

    //Free rows
    for (n=0; n<5; n++)
    {
        free(mytab[n]);
    }

    //Free pointer
    free(mytab);

    putchar('\n');

    return EXIT_SUCCESS;
}