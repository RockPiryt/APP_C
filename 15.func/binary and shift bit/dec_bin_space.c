/*Napisz funkcje rekurencyjną o nazwie dec_to_bin, który jako argument będzie przyjmował liczbę naturalną, a w rezultacie będzie wypisywał liczbę w postaci binarnej.

W przypadku sytuacji błędnej program ma wypisać komunikat: BŁĄD*/
#include <stdio.h>

int main()
{
    int n, bin, bit, mul;

    while(scanf("%d", &n)>0)
    {   bin=0;
        mul=1;
        while(n>0)
        {   

            bit = n % 2;// reszta z dzielenia przez 2
            printf("%d ", bit);
            bin += bit * mul;// na któym miejscu ma wylądować bit
            mul *= 10;// zwiększanie mul aby stawiać bit na kolejnym miejscu
            n /= 2;//dzielenie bez reszty
        }
        
    }
    return 0;
}