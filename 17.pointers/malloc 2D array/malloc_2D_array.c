#include <stdio.h>
#include <stdlib.h>

int main()
{   
    //int array[3][5]=
    // {
    //     {1,2,3,4,5},
    //     {4,5,6,7,8},
    //     {7,8,9,10,11},
    // };

    int rows=3;
    int cols=5;

    //Allocate memory for main pointer
    int **array = malloc(sizeof(int*) * rows); //main pointer to the rows

    //Allocate memory for every row
    for(int i=0; i<rows; i++)
    {
        array[i] = malloc(sizeof(int) * cols);
    };

    //Free space from row pointer
    for(int i=0; i<rows; i++)
    {
        free(array[i]);
    };
    
    //Free space from main pointer
    free(array);

    //Allocate memory for every row long version
    //int *array_0 = malloc(sizeof(int) * cols);//first row
    //int *array_1 = malloc(sizeof(int) * cols);//second row
    //int *array_2 = malloc(sizeof(int) * cols);//third row

    //array[0]=array_0;//first row
    //array[1]=array_1;//second row
    //array[2]=array_2;//third row
    

    //Add value to matrix at specific index
    //array[1][2] = 5;
    

    return 0;
}