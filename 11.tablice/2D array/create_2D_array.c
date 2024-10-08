#include <stdio.h>
#include <stdlib.h>

int **create_matrix(int rows, int cols, int a);

int main()
{   
    int **array; // varaible to store matrix
    int rows=5;
    int cols=4;
    int a=3;

    //Call function to create matrix
    array=create_matrix(rows, cols, a);

    //Print matrix
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            printf("%d", array[i][j]);
        }
        printf("\n");
    }

    //Free memory for rows
    for (int i=0; i<rows; i++)
    {
        free(array[i]);
    }

    free(array);

    return 0;
}

int **create_matrix(int rows, int cols, int a)
{
    int **matrix;
    matrix = malloc(sizeof(int*) * rows);// allocate memory for main pointer

    for (int i=0; i<rows; i++)
        matrix[i] = malloc(sizeof(int) * cols);// allocate memory for rows(how many cols in one row)

    //Fill matrix with value a
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            matrix[i][j] = a;
        }
    }
    
    return matrix;

}