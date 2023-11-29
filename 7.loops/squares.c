#include <stdio.h>

// Program to print squares to end, which is user number
int main()
{
    int last_num;
    int i;

    printf("Enter number: \n");
    scanf("%d", &last_num);

    /*For loop
    for(i=1;i<=last_num;i++)
    {
        printf("%d^2 = %d\n", i, i*i);
    }*/

    //while loop
    i=1;
    while(i<=last_num)
    {
        printf("%d^2 = %d\n", i, i*i);
        i++;
    }

    /*do while
    i=1;
    do
    {
        printf("%d^2 = %d\n", i, i*i);
        i++;
    }
    while(i<=last_num);*/



    return 0;
}