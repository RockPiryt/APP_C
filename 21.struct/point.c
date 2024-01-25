/* Napisz program, w którym będzie utworzona struktura o nazwie point. 
Struktura ta będzie przyjmować dwie liczby 
typu double reprezentujące wartość na osi 
OX oraz OY układu współrzędnych.
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

int main()
{   
    Point p1 = 
    {
        .x=2, 
        .y=4
    };
    Point p2 = 
    {
        .x=2, 
        .y=4
    };

    printf("p1.x = %d, p1.y=%d\n", p1.x, p1.y);

    return 0; 
}