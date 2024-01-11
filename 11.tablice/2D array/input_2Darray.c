#include <stdio.h>
#include <stdlib.h>

int **create_matrix(int rows, int cols);

int main()
{   
    int **array; // varaible to store matrix
    int rows=3;
    int cols=2;
    

    //Call function to create matrix
    array=create_matrix(rows, cols);

    //Print matrix
    printf("Your 2D array: \n");
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            printf("%d ", array[i][j]);
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

int **create_matrix(int rows, int cols)
{
    int **matrix;
    matrix = malloc(sizeof(int*) * rows);// allocate memory for main pointer

    for (int i=0; i<rows; i++)
        matrix[i] = malloc(sizeof(int) * cols);// allocate memory for rows(how many cols in one row)

    //Fill matrix with user value
    int value;
    printf("Please enter value to your array: \n");
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {   
            scanf("%d",&value);
            matrix[i][j] = value;
        }
    }
    
    return matrix;

}