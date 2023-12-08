#include <stdio.h>
//dokładność float -6,7 miejsc po przecinku

int main()
{
    float x,y;

    x=0.1;
    y=0.25;

    printf("%.15f", x);
    printf("%.15f", y);

    return 0;
}