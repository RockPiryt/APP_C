#include <stdio.h>

//opowiedź 22//WAŻNE
int main()
{   
    int i;
    int tab[] = {0,2,4,6,8,10,12,14,16,18,20};

    for(i=2; i<20; i++)// DOKAŃCZA WARUNEK
    {
        i += *(tab+i);
        printf("act: %d\n", i);
    }

    printf("%d", i);
    return 0;
}
//1. i=2, true
//  i=2+tab[2]=2+4=6
//2. i=7, true
// i=7+tab[7] = 7+14 =21
//3. i=22, false ---- bo dokańcza warunek z for loop