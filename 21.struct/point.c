/* Napisz program, w którym będzie utworzona struktura o nazwie point. 
Struktura ta będzie przyjmować dwie liczby 
typu double reprezentujące wartość na osi OX oraz OY układu współrzędnych.
Następnie program główny ma pobierać dwa punkty x i b 
i obliczyć odległość między tymi punktami.
Wynik wypisujemy do drugiego miejsca po przecinku (bez zaokrąglenia).
Obliczanie odległości oraz pobieranie punktu ma być realizowane w funkcji.*/
#include <stdio.h>
typedef struct 
{
    double x;
    double y;
    
}Point;

void print_point(Point p);

int main()
{   
    // User enter values for Point 1 and Point 2
    double a,b,c,d;
    printf("Please enter x value for Point 1: \n");
    scanf("%lf", &a);
    printf("Please enter y value for Point 1: \n");
    scanf("%lf", &b);
    printf("Please enter x value for Point 2: \n");
    scanf("%lf", &c);
    printf("Please enter y value for Point 2: \n");
    scanf("%lf", &d);

    

    //Add values to structs
    Point p1 = 
    {
        .x=a, 
        .y=b
    };
    Point p2 = 
    {
        .x=c, 
        .y=d
    };


    //Diffrent scanf
    Point p3;
    printf("Please enter x and y values for Point 3: \n");
    scanf("%lf %lf", &p3.x, &p3.y);

    // printf("p1.x = %lf, p1.y=%lf\n", p1.x, p1.y);
    // printf("p2.x = %lf, p2.y=%lf\n", p2.x, p2.y);
    // printf("p3.x = %lf, p3.y=%lf\n", p3.x, p3.y);

    print_point(p1);
    
    return 0; 
}

void print_point(Point p)
{
    printf("p.x = %lf, p.y=%lf\n", p.x, p.y);
}