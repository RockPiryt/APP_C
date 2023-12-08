#include <stdio.h>
//dokładność double -15 miejsca po przecinku

int main()
{
    double x,y;

    x=0.1;
    y=0.25;

    printf("%.25f\n", x);
    printf("%.25f\n", y);

    return 0;
}