#include <stdio.h>

//prawidłowa odp nie a=2 b=0
int main()
{   
    int a=0;
    int b=1;

    if(b-- && ++a && a*b)// po sprawdzeniu if b=0, a=1, a*b=0
        printf("Tak %d %d", a++, --b);
    else
        printf("Nie %d %d", ++a, b--);// a=2, b=0, a zwiększam b nie ruszam

    return 0;
}
//if b--=1 true, ++a=1 true, 0*1=1 false
// printf nie a=1+1=2 b=1-1=0 