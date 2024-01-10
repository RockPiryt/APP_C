#include <stdio.h>

int main()
{   int n=15;

    printf("%d\n", n);
    
    n=n>>1;
    printf("%d\n", n);

    n=n>>2;
    printf("%d\n", n);

    n=n<<2;
    printf("%d\n", n);

    return 0;
}