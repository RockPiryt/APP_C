#include <stdio.h>

int main()
{
    int x=10;
    int y=12;
    
    printf("%d==%d: %d\n", x,y,x==y);//equal
    printf("%d!=%d: %d\n", x,y,x!=y);//different
    printf("%d>%d: %d\n", x,y,x>y);//greater
    printf("%d<%d: %d\n", x,y,x<y);//lower
    printf("%d>=%d: %d\n", x,y,x!=y);//greater or equal
    printf("%d<=%d: %d\n", x,y,x<=y);//lower or equal

    return 0;
}