#include <stdio.h>

int CircleArea(double radius)
{   double area;
    area=3.14*radius*radius;
    return area;
}

int main()
{
    double radius;
    double area;

    printf("Enter radius:\n");
    scanf("%lf", &radius);

    area = CircleArea(radius);

    printf("Circle area: %.3f\n", area);
    
    return 0;

}