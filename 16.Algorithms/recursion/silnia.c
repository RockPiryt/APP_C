#include <stdio.h>

//Factorial - only positive int! n>=1

//n! = n *(n-1)*(n-2)*(n-3)....* 1
//5! = 5 * 4 * 3 * 2 * 1

int factorial(int n);

int main()
{   int n=0;
    int fact = 1;//standard
    int factorial_num=1;//recursion

    //User enter value to calc
    printf("Enter a number: ");
    scanf("%d", &n);
    
    //Recursion version
    factorial_num = factorial(n);
    printf("Factorial recursion: %d\n", factorial_num);

    //Without recursion
    while (n >= 1)
    {
        fact = n * fact;
        n--;
    }
    printf("Factorial standard calc: %d", fact);
    return 0;
}

//Recursion version
int factorial(int n)
{    
    if (n == 1) return 1; //base case - end recursion
    return n * factorial(n-1);
}