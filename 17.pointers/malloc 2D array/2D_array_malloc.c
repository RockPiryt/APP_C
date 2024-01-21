#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int rows =5;
    int cols =5;


    //Allocate memory for rows number
    int **array = malloc(sizeof(int*) * rows);

    // Loop through rows 
    for(int i = 0; i < rows; i++)
    {   
        //Allocate memory for cols in each rows
        array[i] = malloc(sizeof(int) * cols);
    }

    //Free memory of rows
    for(int i = 0; i < rows; i++)
    {
        free(array[i]); 
    }
    //Free memory - main pointer
    free(array);

    return 0;
}





// Definition
//     int my_array[3][3]=
//     {
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };
    
//     //**my_array is pointer to row pointers
//     int **my_array = malloc(sizeof(int * ) * 3);

//     //Allocate memory for rows pointers
//     int *my_array0 = malloc (sizeof(int) * 3);
//     int *my_array1 = malloc (sizeof(int) * 3);
//     int *my_array2 = malloc (sizeof(int) * 3);

//     //Add value to 2D array
//     my_array[1][2] = 5;

