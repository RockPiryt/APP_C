#include <stdio.h>

int main()
{
    int x;

    x=15;

    //postincrementation
    printf("x=%d\n", x);
    printf("x=%d\n", x++);
    printf("x=%d\n", x);

    /*
    x=15
    x=15
    x=16
    */


    return 0;

}