#include <stdio.h>

int ff(int a, int b)
{
    //variables
    int c;
    int a;
    int b;
    int sub;

    // check if mianownik róźny od 0
    sub=a-b;

    if (sub==0)
    {
        printf("error");
        return 1;
    }
    //function schema
    c = a+b;


    return c;
}

int main(void)

{
    
    printf("%d\n", ff(2,4));
    return 0;
}
