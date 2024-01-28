#include <stdio.h>

//Zadanie 10 co na wyjściu?

//odpowiedź n=10 p=4


int main()
{   
    int n=1;
    int p=1;
    
    while (n<9)
    {
        n+=3;
        ++p;
    }
    printf("n=%d", n);
    printf("p=%d", p);
    return 0;
}

//1 n=1 true n=4 p=2
//2 n=4 true n=7 p=3
//3 n=7 true n=10 p=4
//4 n=10 false
