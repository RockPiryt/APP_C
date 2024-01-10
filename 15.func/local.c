#include <stdio.h>

void square(int size)//size is argument for func
{
    int row,col;

    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)// size=10
            printf("--");
        printf("\n");
    }


}

int main()
{   
    int size=10;//local variables

    square(size);//variable size for func

    return 0;
}