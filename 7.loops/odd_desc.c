/*Napisz program, który wypisze po przecinku wszystkie liczby nieparzyste w kolejności malejącej od liczby podanej przez użytkownika do 1.*/

/*
Przykładowe wejście

7

Przykładowe wyjście

7, 5, 3, 1
*/

#include <stdio.h>

int main()
{   
    int num, i;
    char comma=',';
    

    printf("Please Enter odd number: \n");
    scanf("%d", &num);



    if(num%2!=0)
    { 
        for (i=0; num>=1; i++)
        {
            printf("%d, ", num);
            num-=2;
            // if(i < (num+1)/2)
            // {
            //     printf("%c", comma);
            // }
        }
    }
    else
    {
        printf("You have to enter odd number!");
    }

    return 0;

}