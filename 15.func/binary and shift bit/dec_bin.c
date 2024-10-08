#include <stdio.h>

int main()
{
    int dec, bin, bit, mul;

    while(scanf("%d", &dec)>0)
    {   bin=0;
        mul=1;
        while(dec>0)
        {   

            bit=dec%2;// reszta z dzielenia przez 2
            bin+=bit*mul;// na któym miejscu ma wylądować bit
            mul*=10;// zwiększanie mul aby stawiać bit na kolejnym miejscu
            dec/=2;//dzielenie bez reszty
        }
        printf("%d\n", bin);
    }
    return 0;
}