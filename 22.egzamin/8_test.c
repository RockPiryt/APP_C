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
        return n + A(n/3+1);// WAŻNE DODAJE WYNIK FUNKCJI
}            // 5+ A(2)
            //  5 + 3  = 8
            //  A(2) = 2+A(2/3+1)=2+A(1)= 2+1=3
            //  A(1) = 1 return 1