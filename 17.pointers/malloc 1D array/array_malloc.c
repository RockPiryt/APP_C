#include <stdio.h>
#include <stdlib.h>//malloc


int main () 
{   
    //Initialize pointer to array
    int *p_array;

    //User enter size of array
    int n=0;
    
    printf("enter a length:\n");
    scanf("%d", &n);

    //Check user value
    if (n<=0)
    {
      printf("BŁĄD");
      return 0;
    }

    //Allocate space memory for array
    p_array = (int*)malloc(n * sizeof(int));

    //Print adrress to array
    printf("array address: %p\n", p_array);

    //Check if array has allocated memory
    if (p_array == NULL)
    {
      printf("BŁĄD");
      return 0;
    }

    //Fill an array with values
    for (int i=0; i<n; i++)
    {
        p_array[i]=i+1;//index[0]=1
    }

    //Print array
    for (int i=0; i<n; i++)
    {
        printf("%d ", p_array[i]);
    }

    //Release space memory
    free(p_array);

    return 0;

}