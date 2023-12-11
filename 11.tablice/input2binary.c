/*Napisz program, który dla wczytanej przez użytkownika liczby poda jego reprezentacje binarną.

Wykorzystaj do tego wyłącznie tablice!!!*/

#include <stdio.h>

int dec_bin();

int main()

{   int n, binary_num;

    //User enter number
    printf("Enter a number: \n");
    scanf("%d", &n);

    if(n<0)
    {
        printf("Error");
        return 0; //for stepik test
    }

    //Tab initialization
    int tab[100];

    binary_num=dec_bin(n);
    printf("%d", binary_num);

    return 0; 
}



int dec_bin(int dec)
{
    int bin, bit, mul;

    while(dec>0)
    {   bin=0;
        mul=1;
        while(dec>0)
        {   

            bit=dec%2;// reszta z dzielenia przez 2
            bin+=bit*mul;// na któym miejscu ma wylądować bit
            mul*=10;// zwiększanie mul aby stawiać bit na kolejnym miejscu
            dec/=2;//dzielenie bez reszty
        }
        //printf("%d\n", bin);
    }
    return bin;
}