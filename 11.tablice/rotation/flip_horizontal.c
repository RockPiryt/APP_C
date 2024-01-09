#include <stdio.h>

#define ROWS 5
#define COLS 4

void flip_horizontal(int array[ROWS][COLS], int num_rows);

int main()

{ 
    int array[ROWS][COLS]=
    {
        {1,1,1,1},
        {2,2,2,2},
        {3,3,3,3},
        {4,4,4,4},
        {5,5,5,5},
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

    // Call functions to flip horizontal
    flip_horizontal(array, ROWS);

    //Flipped horizontal array
    printf("Flipped horizontal array:\n");
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

//FLIP HORIZONTAL
void flip_horizontal(int array[ROWS][COLS], int num_rows)
{
    int temp = 0;

    for (int i=0; i<(num_rows / 2); i++)
    {   
        for(int j=0; j<COLS; j++)
        {
            temp = array[i][j]; //First element in array
            array[i][j] = array[num_rows-i-1][j];
            array[num_rows-i-1][j] = temp;
        }
    }
}


