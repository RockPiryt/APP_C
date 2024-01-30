#include <stdio.h>

//Zadanie 11 co na wyjściu gdy B(5)

int B(int x);

int main()
{   
    double result;
    result = B(5);
    printf("result: %lf", result);
    return 0;
}
int B(int x)
{   
    printf("comparison value: %d\n", x>0);
    x += (x>0);////////////WAŻNE
    printf("x value: %d\n", x);
    return (x/3) ? ++x : x--;
}
//x>0  True = 1
//x<0 False = 0
// 5+1
// return 10/3 =3 True -> 3+1=4
