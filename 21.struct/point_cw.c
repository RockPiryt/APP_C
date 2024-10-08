/* Napisz program, w którym będzie utworzona struktura o nazwie point. 
Struktura ta będzie przyjmować dwie liczby 
typu double reprezentujące wartość na osi OX oraz OY układu współrzędnych.
Następnie program główny ma pobierać dwa punkty x i y
i obliczyć odległość między tymi punktami.
Wynik wypisujemy do drugiego miejsca po przecinku (bez zaokrąglenia).
Obliczanie odległości oraz pobieranie punktu ma być realizowane w funkcji.*/
#include <stdio.h>
#include <math.h>

typedef struct 
{
    double x;
    double y;
    
}Point;

void print_point(Point p);
double calc_distance(Point a, Point b);

int main()
{   
    // User enter values for Point 1 and Point 2
    double xa, ya, xb, yb;
    printf("Please enter x an y coordinates for Point a: \n");
    scanf("%lf %lf", &xa, &ya);
    printf("Please enter x and y coordinates for Point b: \n");
    scanf("%lf %lf", &xb, &yb);
    
    //Add values to structs
    Point a = {xa, ya};
    Point b = {xb, yb};

    //Call function to calculate distance
    double result;
    result = calc_distance(a, b);
    printf("Distance between two points (a and b) is: %.2lf", result);

    return 0; 
}

void print_point(Point p)
{
    printf("x = %.2lf, y=%.2lf\n", p.x, p.y);
}


double calc_distance(Point a, Point b)
{   
    //Make subtraction of 2 points. It returns point sub(xa-xb, ya-yb)
    Point sub;
    sub.x = a.x-b.x;
    sub.y = a.y-b.y;

    //Make power points. It returns point pow(sub.x^2, sub.y^2)
    Point power_p;
    power_p.x= pow(sub.x,2);
    power_p.y = pow(sub.y,2);
    
    //Make summary of (sub.x^2)+(sub.y^2)
    double sum;
    sum = power_p.x + power_p.y;
    printf("Summary is: %.2lf\n", sum);

    //Make square root of |/(sub.x^2)+(sub.y^2)
    double square_n;
    square_n = sqrt(sum);

    return square_n;
}
