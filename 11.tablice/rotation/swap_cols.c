#include <stdio.h>

#define ROWS 3
#define COLS 5

void swap_cols(int array[ROWS][COLS], int colA, int colB);

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

    // Call functions to single swap
    swap_cols(array, 1, 3);

    //Array with swapped cols
    printf("Array with swapped cols:\n");
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

//loop through ROWS = swap COLS index
void swap_cols(int array[ROWS][COLS], int colA, int colB)
{
    int temp = 0;
    for(int i=0; i< ROWS; i++)
    {
        temp = array[i][colA];
        array[i][colA] = array[i][colB];//change rows index
        array[i][colB] = temp;
    }
}


