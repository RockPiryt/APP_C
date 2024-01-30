#include <stdio.h>

//Zadanie 13 co na wyjściu?



int main()
{   
    int tab[]={2,3,4,5,6,7,8};
    int *p= tab + tab[2];
    printf("%d", p[0]);
    return 0;
}

// *p = {2 , 4}
// p[1] = 4