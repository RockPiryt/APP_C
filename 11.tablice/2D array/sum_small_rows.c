#include <stdio.h>
#include <stdlib.h>

int *create_matrix(int n); //Allocate space for array
int *get_matrix(int n); // Fill array with values
int *print_matrix(int n); // Print array

int main () 
{   //User enter size of array
    int n=0;
    int m=0;
    
    printf("Please enter n value:\n");
    scanf("%d", &n);
    printf("Please enter n value:\n");
    scanf("%d", &m);

    //Check user value
    if (n<=0)
    {
      printf("error");
      return 0;
    }
    else
        //Call function
        print_matrix(n);

    return 0;
}

int *create_matrix(int n)
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

int *get_matrix(int n)
{
    //Call function
    int *user_array = create_matrix(n);

    //Fill an array with values
    for (int i=0; i<n; i++)
    {
        user_array[i]=i+1;//index[0]=1
    }

    return user_array;
}

int *wypisz_tablice(int n)
{   
    //Call function
    int *print_array = get_matrix(n);

    //Print array
    for (int i=0; i<n; i++)
    {
        printf("%d ", print_array[i]);
    }

    //Release space memory
    free(print_array);
}