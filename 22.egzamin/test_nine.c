#include <stdio.h>

//Zadanie 9 co na wyjściu?

//odpowiedź AAAA


int main()
{   
    int n=2;
    int k;
    k = (n%2)?n++:4;
    while (k--)
        printf("A");
    return 0;
}

//1 n=2%2 false k=4 A k=3 A k=2 A k=1 A = 4xA
//2 n=2%2 false k=0
