#include <stdio.h>

#define ROWS 5
#define COLS 4

void swap_rows(int array [ROWS][COLS], int rowA, int rowB);

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

    // Call functions to single swap
    swap_rows(array, 1, 4);

    //Array with swapped rows
    printf("Array with swapped rows:\n");
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

//loop through COLS = SWAP ROWS
void swap_rows(int array [ROWS][COLS], int rowA, int rowB)
{
    int temp = 0;
    for(int i=0; i<COLS; i++)
    {
        temp = array[rowA][i];
        array[rowA][i] = array[rowB][i];//change rows index
        array[rowB][i] = temp;
    }
}


