#include <stdio.h>

int size=5;
void square()//only print
{
    int row,col;

    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)//size=5
            printf("--");
        printf("\n");
    }


}

int main()
{   

    square();

    return 0;
}