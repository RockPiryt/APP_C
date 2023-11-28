#include <stdio.h>
int main()
{
    int a,b,c;

    /* User enters 3 values for a,b,c*/
    printf("Enter first side:\n");
    scanf("%d", &a);
    printf("Enter second side:\n");
    scanf("%d", &b);
    printf("Enter third side:\n");
    scanf("%d", &c);


    /*Check if triangle is possible*/
    if (a+b>c && b+c>a && a+c>b)
    {
        printf("Triangle is possible!");
        return 0;
    }

    else 
    {
        printf("Triangle is impossible!");
        return 1;
    }


}