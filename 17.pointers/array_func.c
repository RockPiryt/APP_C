#include <stdio.h>
#include <stdlib.h>

int *stworz_tablice();

int main () 
{   

    //Call function
    int *result = stworz_tablice();


    //Release space memory
    free(result);

    return 0;

}

int *stworz_tablice()
{
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
    int *array = (int*)malloc(n * sizeof(int));



    //Check if array has allocated memory
    if (array == NULL)
    {
      printf("BŁĄD");
      return 0;
    }

    //Fill an array with values
    for (int i=0; i<n; i++)
    {
        array[i]=i+1;//index[0]=1
    }

    //Print array
    for (int i=0; i<n; i++)
    {
        printf("%d ", array[i]);
    }

    return array;
}