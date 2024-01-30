#include <stdio.h>

//opowiedź 13
int main()
{   
    int i=5;
    int k=3;

    k+=i++ + 5; //3+10 //WAŻNE
    printf("%d", k);
   
    return 0;
}

