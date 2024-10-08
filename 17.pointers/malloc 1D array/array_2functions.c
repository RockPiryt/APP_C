#include <stdio.h>
#include <stdlib.h>

int *stworz_tablice(int n);
int *pobierz_tablice(int n);

int main () 
{   //User enter size of array
    int n=0;
    
    printf("enter a length:\n");
    scanf("%d", &n);

    //Check user value
    if (n<=0)
    {
      printf("BŁĄD");
      return 0;
    }
    else
        //Call function
        pobierz_tablice(n);

    return 0;

}

int *stworz_tablice(int n)
{

    //Allocate space memory for array
    int *array = (int*)malloc(n * sizeof(int));

    //Check if array has allocated memory
    if (array == NULL)
    {
      printf("BŁĄD");
      return 0;
    }
    else
        return array;
}

int *pobierz_tablice(int n)
{
    //Call function
    int *user_array = stworz_tablice(n);

    //Fill an array with values
    for (int i=0; i<n; i++)
    {
        user_array[i]=i+1;//index[0]=1
    }

    //Print array
    for (int i=0; i<n; i++)
    {
        printf("%d ", user_array[i]);
    }
    
    //Release space memory
    free(user_array);
}