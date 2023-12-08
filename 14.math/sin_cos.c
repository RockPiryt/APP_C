#include <stdio.h>
#include<math.h>

int main()
{
    double angle;
    printf("Enter angle in radians:\n");
    scanf("%lf", &angle);

    printf("sin(%.2f)=%.2f\n", angle, sin(angle));
    printf("cos(%.2f)=%.2f\n", angle, cos(angle));
    printf("tan(%.2f)=%.2f\n", angle, tan(angle));
    printf("ctg(%.2f)=%.2f\n", angle, 1.0/tan(angle));

    return 0;
}