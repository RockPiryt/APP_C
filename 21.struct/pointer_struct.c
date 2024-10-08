#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x;
    int y;
}Point;

int main()
{   
    //Simple struct creation
    Point p1;
    p1.x = 2;
    p1.y = 3;

    printf("p1: (%d, %d)\n", p1.x, p1.y);

    //////////////////////////////////////////////////
    //To change value in first struct p1
    Point *p2;//pointer to struct

    p2=&p1;//assign to pointer memory address of first struct

    p2->x=7;//change value
    p2->y=9;

    printf("changed p1: (%d, %d)\n", p1.x, p1.y);
    printf("p2 values the same as p1: (%d, %d)\n", p2->x, p2->y);

    //////////////////////////////////////////////
    //Dynamic allocate space for struct
    Point *p3;

    p3 = malloc(sizeof(Point));

    p3->x = 4;
    p3->y = 4;
    printf("p3 : (%d, %d)\n", p3->x, p3->y);
    
    //diffrent assigment - not elegant
    (*p3).x= 5;
    (*p3).y =5;
    printf("p3(not elegant) : (%d, %d)\n", (*p3).x, (*p3).y);


    return 0;
}