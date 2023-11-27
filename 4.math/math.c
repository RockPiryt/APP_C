#include <stdio.h>

int main()
{
    int x;

    x = 15;
    printf("%d\n", x);

    /* podzielona przez 2 zmienna x = x/2 */
    x/=2;
    printf("%d\n", x);

    /* pomnozona przez 2 zmienna x = x*2 */
    x*=2;
    printf("%d\n", x);

    /*  o 1 powiekszona zmienna x = x+2 */
    x+=1;
    printf("%d\n", x);

    /* o 2 pomniejszona zmienna x = x-2 */
    x-=1;
    printf("%d\n", x);

    /* inkrementacja*/
    x++;
    ++x;
    printf("%d\n", x);

    /* dekrementacja*/
    x--;
    --x;
    printf("%d\n", x);




    return 0;

}