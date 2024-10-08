#include <stdio.h>

int main()
{   int a,b,c;

    printf("Enter value in decimal format\n");
    scanf("%d", &a);//enter 12 
    printf("Enter value in octal format\n");
    scanf("%i", &b);//enter 012
    printf("Enter value in hexadecimal format\n");
    scanf("%i", &c);//enter 0x12

    printf("Decimal format a=%i\n", a); //a=12
    printf("Octal format b=%i\n", b); //b=10
    printf("Hexadecimal format c=%i\n", c);//c=18

    return 0;
}