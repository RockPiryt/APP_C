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
Point subtract_points(Point a, Point b);
Point power_points(Point p);
double final_cal(Point pow);

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

    //Call function to substract points
    Point sub = subtract_points(a, b);
    printf("sub point coordination: \n");
    print_point(sub);

    //Call function to power
    Point pow = power_points(sub);
    printf("pow point coordination: \n");
    print_point(pow);

    //Call function to final calculation
    double result;
    result = final_cal(pow);
    printf("Distance between two points (a and b) is: %.2lf", result);

    return 0; 
}

void print_point(Point p)
{
    printf("x = %.2lf, y=%.2lf\n", p.x, p.y);
}

//Function to substract points. It returns point sub(xa-xb, ya-yb)
Point subtract_points(Point a, Point b)
{   
    Point sub;
    sub.x = a.x-b.x;
    sub.y = a.y-b.y;
    return sub;
}

//Function power points. It returns point pow(sub.x^2, sub.y^2)
Point power_points(Point p)
{   
    Point power_p;
    power_p.x= pow(p.x,2);
    power_p.y = pow(p.y,2);
    return power_p;
}

double final_cal(Point pow)
{   
    double sum;
    sum = pow.x + pow.y;
    printf("Summary is: %.2lf\n", sum);
    double square_n;
    square_n = sqrt(sum);

    return square_n;
}
