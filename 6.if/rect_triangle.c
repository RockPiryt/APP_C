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


    /*Check if  rectangular triangle is possible*/
    if ((a*a+b*b==c*c) || (a*a+c*c==b*b) || (b*b+c*c==a*a) )
    {
        printf("Rectangular triangle is possible!");
        return 0;
    }
    else 
    {
        printf("Rectangular triangle is impossible!");
        return 1;
    }


}