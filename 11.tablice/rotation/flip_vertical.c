


//Coś niedziała!!!!!!!!!!!!!

#include <stdio.h>

#define ROWS 3
#define COLS 5

void flip_horizon(int array[ROWS][COLS], int num_rows, int num_cols);


int main()

{ 
    int array[ROWS][COLS]=
    {
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
    };

    //Print original array
    printf("Original array:\n");
    for (int i=0; i <ROWS; i++)
    {
        for(int j=0; j<COLS; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    // Call functions to flip veritcal
    flip_horizon(array, ROWS, COLS);

    //Flipped vertical array
    printf("Flipped vertical array:\n");
    for (int i=0; i <ROWS; i++)
    {
        for(int j=0; j<COLS; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//FLIP vertical
void flip_horizon(int array[ROWS][COLS], int num_rows, int num_cols)
{
    int temp = 0;

    for (int i=0; i<num_rows; i++)
    {   
        for(int j=0; j<(num_cols/2); j++)
        { 
            temp = array[i][j]; //First element in array
            array[i][j] = array[i][num_cols-1-j];
            array[i][num_cols-1-j] = temp;
        }
    }
}


