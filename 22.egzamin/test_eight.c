#include <stdio.h>

//Zadanie 8 co się wyświetli jak A(5)? 

//odpowiedź 8
int A(int n);

int main()
{   
    int result;
    result= A(5);
    printf("%d", result);
    return 0;
}

//9 
int A(int n)
{
    if(n<=1)
        return 1;
    else
        return n + A(n/3+1);
}            // 5+ A(2)
            //  5 + 3  = 8
            //  A(2) = 2+2/3+1=
            //        2+0+1=3