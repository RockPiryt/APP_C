/*Napisz program, który będzie wczytywał zmienne n i m oraz będzie tworzył dynamiczną tablicę dwuwymiarową o rozmiarach n×m. Następnie program wypełni tę tablicę elementami od 1,…,n×m i wypisze te elementy na ekranie.

W przypadku sytuacji błędnych program ma wypisać komunikat BŁĄD i ma zakończyć działanie.*/
#include <stdio.h>
#include <stdlib.h>


int **my_create_matrix (int n, int m);


int main(void)
{   
    int n;
    int m;
    //User enter size of array
    printf("Please enter rows value:\n");
    scanf("%d", &n);
    printf("Please enter cols value:\n");
    scanf("%d", &m);
    
    // to store my 2d array
    int **matrix;

    matrix = my_create_matrix(n, m);


    // //Print 2D array
    printf("Your array:\n");
    for (int i = 0; i < n; i++)
    {
        // Outputs the values at each row
        for (int j = 0; j < m; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    //Free memory of rows
    for(int i = 0; i < n; i++)
    {
        free(matrix[i]); 
    }
    //Free memory - main pointer
    free(matrix);

    return 0;
}

int **my_create_matrix (int n, int m)
{   
    //Main pointer
    int **matrix; 

    //Allocate memory for rows number
    matrix = malloc(sizeof(int *) * n);
    if (matrix == NULL)
    {
        printf("BŁĄD");
    }


    // Loop through rows 
    for (int i = 0; i < n; i++)
    {
        //Allocate memory for cols in each rows
        matrix[i] = malloc(sizeof(int) * m);
        if (matrix == NULL)
        {
            printf("BŁĄD");
        }
    }

    //Fill 2D array
    int count = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {   
            matrix[i][j] = count++;
        }
    }

    return matrix;
}

