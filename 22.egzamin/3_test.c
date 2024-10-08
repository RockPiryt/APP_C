#include <stdio.h>
// wyprintowało 6
// i=6 i wieksze od 5 ////////WAŻNE
int main()
{   
    int i=0;
    int k=0;

    int tab[8]={-6,0,2,0,1,7,0,2};

    while (i<6 && *(tab+i)) i+=2;

    printf("%d", i);

    
    return 0;
}

//1) i=0,true && tab[0]=-6, i=2;
//2) i=2, true && tab[2]=2, i=4;
//2) i=4, true && tab[4]=1, i=6;
//4) i=6, false