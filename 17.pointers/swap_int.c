#include <stdio.h>

void swap(int *a, int *b);

int main()
{   // Get 2 value from user
    int x,y;

    scanf("%i", &x);
    scanf("%i", &y);
    // x=5;
    // y=7;
    
    //Print value
    printf("x:%d, y:%d\n", x,y);

    // Pass addresses of value to function
    swap(&x, &y);

    //Print value after swap
    printf("Value after swap\n x:%d, y:%d\n", x,y);

    return 0;
}

void swap(int *a, int *b)
{
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
}